// Knapsack
#include <iostream>
using namespace std;

int Knapsack(int *wts,int *prices,int n,int capacity){
	if(n==0||capacity==0){
		return 0;
	}

	int inc=0,exc=0;

	if(wts[n-1]<=capacity){
		inc=prices[n-1]+Knapsack(wts,prices,n-1,capacity-wts[n-1]);
	}
	exc=0+Knapsack(wts,prices,n-1,capacity);
	return max(inc,exc);
}

int topdown(int *wts,int *prices,int n,int capacity,int dp[][100]){
	if(n==0||capacity==0){
		dp[n][capacity]=0;
		return dp[n][capacity];
	}
	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}

	int inc=0,exc=0;
	if(wts[n-1]<=capacity){
		inc=prices[n-1]+topdown(wts,prices,n-1,capacity-wts[n-1],dp);
	}
	exc=topdown(wts,prices,n-1,capacity,dp);

	dp[n][capacity]=max(inc,exc);
	return dp[n][capacity];

}

int BottomUp(int *wts,int *prices,int N,int capacity){
	int dp[100][100]={0};

	for(int n=0;n<=N;n++){
		for(int w=0;w<=capacity;w++){
			if(w==0||n==0){
				dp[n][w]=0;
			}
			else{
				int inc=0,exc=0;
				if(wts[n-1]<=w){
					inc=prices[n-1]+dp[n-1][w-wts[n-1]];
				}
				exc=0+dp[n-1][w];
				dp[n][w]=max(inc,exc);
			}
		}
	}
	for(int n=0;n<=N;n++){
		for(int w=0;w<=capacity;w++){
			cout<<dp[n][w]<<" ";
		}
		cout<<endl;
	}

	return dp[N][capacity];
}



int main(){
	int weight[]={2,2,3,1};
	int prices[]={10,20,10,15};
	int n=sizeof(weight)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
	int capacity=5;
	cout<<topdown(weight,prices,n,capacity,dp)<<endl;
	cout<<BottomUp(weight,prices,n,capacity)<<endl;
	cout<<Knapsack(weight,prices,n,capacity)<<endl;

	return 0;
}
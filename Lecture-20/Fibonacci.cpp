#include <iostream>
using namespace std;

int fibo(int n){
	if(n==1||n==0){
		return n;
	}

	int ans=fibo(n-1)+fibo(n-2);
	return ans;
}

int topdown(int n,int *dp){
	if(n==0||n==1){
		dp[n]=n;
		return dp[n];
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=topdown(n-1,dp)+topdown(n-2,dp);
	dp[n]=ans;
	return dp[n];
}

int BottomUP(int n){
	int dp[1000]={0};

	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}


int main(){
	int n;
	cin>>n;
	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}
	cout<<topdown(n,dp)<<endl;
	cout<<BottomUP(n)<<endl;
	cout<<fibo(n)<<endl;


	return 0;
}
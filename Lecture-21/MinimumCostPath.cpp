// MinimumCostPath
#include <iostream>
using namespace std;

int MinimumCostPath(int i,int j,int cost[][10]){
	// Base case
	if(i==0 && j==0){
		return cost[i][j];
	}
	if(i==0 && j>0){
		return MinimumCostPath(i,j-1,cost)+cost[i][j];
	}
	else if(j==0 && i>0){
		return MinimumCostPath(i-1,j,cost)+cost[i][j];
	}
	else{
		int op1=MinimumCostPath(i-1,j,cost);
		int op2=MinimumCostPath(i,j-1,cost);
		return min(op1,op2)+cost[i][j];
	}
}

// int topdown()
int bottomUp(int i,int j,int cost[][10]){
	int dp[100][100]={0};
	for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
			if(k==0 && l==0){
				dp[k][l]=cost[k][l];
			}
			else if(k==0 && l>0){
				dp[k][l]=cost[k][l]+dp[k][l-1];
			}
			else if(k>0 && l==0){
				dp[k][l]=cost[k][l]+dp[k-1][l];
			}
			else{
				int op1=dp[k-1][l];
				int op2=dp[k][l-1];
				dp[k][l]=min(op1,op2)+cost[k][l];
			}
		}
	}

	for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
			cout<<dp[k][l]<<" ";
		}
		cout<<endl;
	}
	return dp[i][j];

}

int main(){
	int n;
	int cost[][10]={
		{1,2,5,1},
		{8,3,6,2},
		{0,1,3,3},
		{4,1,7,2}
	};

	int i,j;
	cout<<"Enter i and j (<4) : ";
	cin>>i>>j;
	cout<<MinimumCostPath(i,j,cost)<<endl;
	cout<<bottomUp(i,j,cost)<<endl;
	return 0;
}
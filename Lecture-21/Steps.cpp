// Steps
#include <iostream>
using namespace std;

int steps(int i,int j){
	int dp[100][100]={0};

	for(int k=0;k<=i;k++){
		dp[k][0]=1;
	}
	for(int k=0;k<=j;k++){
		dp[0][k]=1;
	}	

	for(int k=1;k<=i;k++){
		for(int l=1;l<=j;l++){
			dp[k][l]=dp[k-1][l]+dp[k][l-1];
		}
	}
	for(int k=0;k<=i;k++){
		for(int l=0;l<=j;l++){
			cout<<dp[k][l]<<" ";
		}cout<<endl;
	}	
	return dp[i][j];
}


int main(){
	int i,j;
	cin>>i>>j;

	cout<<steps(i,j)<<endl;

	return 0;
}
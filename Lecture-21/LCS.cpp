// LCS
#include <iostream>
#include <cstring>
using namespace std;

int BottomUp(char *a,char *b){
	int m=strlen(a);
	int n=strlen(b);
	int dp[100][100]={0};
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(a[i-1]==b[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}cout<<endl;
	}
	
	return dp[m][n];

}


int main(){
	char a[]="cbc";
	char b[]="abcabc";

	cout<<BottomUp(a,b)<<endl;


	return 0;
}
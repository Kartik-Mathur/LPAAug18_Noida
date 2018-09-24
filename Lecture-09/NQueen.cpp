// NQueen
#include <iostream>
using namespace std;

bool KyaYahaRakhSkteHai(int board[][100],int i,int j,int n){
	for(int k=0;k<n;k++){
		if(board[k][j] || board[i][k]){
			return false;
		}
	}

	int r=i,c=j;
	while(r>=0 && c>=0){
		if(board[r][c]){
			return false;
		}
		r--;
		c--;
	}
	r=i,c=j;
	while(r>=0 && c<n){
		if(board[r][c]){
			return false;
		}
		r--;
		c++;
	}
	return true;

}


bool NQueen(int board[][100],int i,int n){
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	for(int j=0;j<n;j++){
		if(KyaYahaRakhSkteHai(board,i,j,n)){
			board[i][j]=1;
			bool KyaBakiRakhPaye=NQueen(board,i+1,n);
			if(KyaBakiRakhPaye){
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;

}


int main(){
	int board[100][100]={0};
	int n;
	cin>>n;
	NQueen(board,0,n);

	cout<<endl;
	return 0;
}
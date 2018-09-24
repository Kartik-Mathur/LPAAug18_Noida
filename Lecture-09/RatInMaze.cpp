// RatInMaze
#include <iostream>
using namespace std;


bool solveMaze(char maze[][5],int sol[][10],int i,int j,int m,int n){
	// base case
	if(i==m-1 && j==n-1){
		sol[i][j]=1;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	sol[i][j]=1;


	if(j+1<m && maze[i][j+1]!='X'){
		bool KyaRightSeBaatBani=solveMaze(maze,sol,i,j+1,m,n);
		if(KyaRightSeBaatBani){
			return true;
		}
	}

	if(i+1<n && maze[i+1][j]!='X'){
		bool KyaNeecheSeBaatBani=solveMaze(maze,sol,i+1,j,m,n);
		if(KyaNeecheSeBaatBani){
			return true;
		}
	}

	sol[i][j]=0;
	return false;

}


int main(){
	char maze[][5]={
		"OOOO",
		"OOXX",
		"OOOO",
		"XXOO"
	};
	int sol[10][10]={0};
	solveMaze(maze,sol,0,0,4,4);
	cout<<endl;
	return 0;
}
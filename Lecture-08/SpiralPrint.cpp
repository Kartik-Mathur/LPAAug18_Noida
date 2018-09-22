#include <iostream>
using namespace std;

void spiralPrint(int a[][100],int row,int col){

	int sr=0,sc=0,er=row-1,ec=col-1;

	while(sr<=er && sc<=ec){

		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		for(int j=sr;j<=er;j++){
			cout<<a[j][ec]<<" ";
		}
		ec--;
		if(sr<er){
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			er--;
		}
		if(sc<ec){
			for(int j=er;j>=sr;j--){
				cout<<a[j][sc]<<" ";
			}
			sc++;
		}

	}



}


int main(){
	int row,col;
	int a[100][100];
	cout<<"Enter Row and Col ";
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	cout<<endl;

	spiralPrint(a,row,col);

	cout<<endl;

	return 0;
}
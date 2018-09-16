#include <iostream>
using namespace std;

int main(){
	int a[2][2]={
		{1,2},
		{3,4}
	};
	int rows,cols;
	cout<<"Enter number of rows ";
	cin>>rows;
	cout<<"Enter number of cols ";
	cin>>cols;

	for(int row=0;row<rows;row++){
		for(int col=0;col<cols;col++){
			cin>>a[row][col];
		}
	}
	int key,row,col;
	cout<<"Enter Key";
	cin>>key;
	for(row=0;row<rows;row++){
		for(col=0;col<cols;col++){
			if(a[row][col]==key){
				cout<<"Element found at i : "<<i<<" j: "<<j<<endl;
				break;
			}
		}
		if(col!=cols){
			break;
		}


		cout<<endl;
	}

	cout<<endl;
	return 0;
}
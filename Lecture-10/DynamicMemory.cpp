// DynamicMemory
#include <iostream>
using namespace std;

int *createArray(int n){
	int *a=new int[n];
	int val=1;
	for(int i=0;i<n;i++){
		a[i]=val;
		val++;
	}
	return a;

}

int main(){

	int r,c;
	cout<<"Enter Rows and Cols ";
	cin>>r>>c;

	int **a;
	a=new int*[r];

	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}

	int val=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			a[i][j]=val;
			val++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<r;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	

	for(int i=0;i<r;i++){
		delete []a[i];
	}
	delete []a;

	// int n;
	// cin>>n;

	// int *a=createArray(n);

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }	
	// delete []a;
	// a=NULL;
	// cout<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	// int *p=new int;

	// *p=10;
	// cout<<*p<<endl;

	// delete p;


	return 0;
}
#include <iostream>
using namespace std;

void InsertionSort(int *a,int n){
	int i,j;
	for(i=1;i<n;i++){
		int no=a[i];
		for(j=i-1;j>=0 && a[j]>no;j--){
			a[j+1]=a[j];
		}
		a[j+1]=no;
	}
}

int main(){
	int a[]={8,7,6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	InsertionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
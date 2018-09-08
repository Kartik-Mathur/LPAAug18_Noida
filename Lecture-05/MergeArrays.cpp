// MergeArrays
#include <iostream>
using namespace std;

void merge(int a[],int n,int b[],int m){
	int i=n-1;
	int j=m-1;
	int k=m+n-1;

	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}

	while(i>=0){
		a[k]=a[i];
		k--;
		i--;
	}

	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}

}


int main(){
	int a[100];
	int b[100];

	int m,n;
	cout<<"Enter n ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter m ";
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}	

	merge(a,n,b,m);
	for(int i=0;i<m+n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}
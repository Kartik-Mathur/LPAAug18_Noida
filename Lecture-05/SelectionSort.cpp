#include <iostream>
using namespace std;

void SelectionSort(int a[],int n){

	for(int i=0;i<=n-2;i++){
		int smallest=i;

		for(int j=i+1;j<=n-1;j++){
			if(a[smallest]>a[j]){
				smallest=j;
			}
		}
		if(smallest!=i){
			int temp=a[i];
			a[i]=a[smallest];
			a[smallest]=temp;
		}
	}
}


int main(){

	int n;
	int a[100];
	cout<<"Enter n : ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	SelectionSort(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;
	return 0;
}
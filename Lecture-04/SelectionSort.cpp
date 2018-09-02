// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int a[100];
	int n,key,l;

	cout<<"Enter the no. of elements";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

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

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}










	return 0;
}
// BubbleSort
#include <iostream>
using namespace std;

void BubbleSort(int *a,int n,int i){
	// base case
	if(i==n-1){
		return;
	}
	
	// For Nth iteration work to be done
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	
	BubbleSort(a,n,i+1);
}


int main(){
	int a[]={6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	BubbleSort(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;




	return 0;
}
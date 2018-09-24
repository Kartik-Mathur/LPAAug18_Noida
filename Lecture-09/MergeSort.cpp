// MergeSort
#include <iostream>
using namespace std;

void merge(int*a ,int *x,int *y,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k++]=x[i++];
			// k++;
			// i++;
		}
		else{
			a[k++]=y[j++];
		}
	}

	while(i<=mid){
		a[k++]=x[i++];
	}
	while(j<=e){
		a[k++]=y[j++];
	}

}


void MergeSort(int *a,int s,int e){
	// base case
	if(s>=e){
		return;
	}
	// Divide
	int x[100],y[100];
	int mid=(s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	for(int j=mid+1;j<=e;j++){
		y[j]=a[j];
	}

	// Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);

	// merge
	merge(a,x,y,s,e);
}


int main(){
	int a[]={3,2,1,5,4,8};
	int n=sizeof(a)/sizeof(int);

	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}



	cout<<endl;
	return 0;
}
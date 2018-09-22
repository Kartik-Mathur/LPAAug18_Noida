// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int *a,int s,int e,int key){
	if(s>e){
		return -1;
	}

	int mid=(s+e)/2;
	if(a[mid]==key){
		return mid;
	}

	else if(a[mid]>key){
		return BinarySearch(a,s,mid-1,key);
	}
	else{
		return BinarySearch(a,mid+1,e,key);
	}


}


int main(){
	int a[]={1,2,3,5,6,8,9,10};
	int n=sizeof(a)/sizeof(int);

	cout<<BinarySearch(a,0,n-1,19);
	cout<<endl;
	return 0;
}
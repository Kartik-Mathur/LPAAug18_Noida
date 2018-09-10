// BinarySearch
#include <iostream>
using namespace std;


int main(){
	int a[]={1,3,4,5,6,7,9};
	int n=sizeof(a)/sizeof(int);

	int key=1;

	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			cout<<"Element found at index "<<mid<<endl;
			break;

		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}

	if(s>e){
		cout<<"Key not found!"<<endl;
	}




	return 0;
}
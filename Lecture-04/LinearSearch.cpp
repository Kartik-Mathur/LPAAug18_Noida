// LinearSearch
#include <iostream>
using namespace std;

int main(){
	int a[100];
	int n,key;

	cout<<"Enter the no. of elements";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter the key : ";
	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Found at index "<<i<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"Key not found!"<<endl;
	}


	return 0;
}
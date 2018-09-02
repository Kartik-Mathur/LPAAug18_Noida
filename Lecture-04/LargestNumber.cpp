// LargestNumber

#include <iostream>
#include <climits>
using namespace std;

int main(){
	int a[100];
	int n,key,l;

	cout<<"Enter the no. of elements";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	l=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>l){
			l=a[i];
		}
	}
	cout<<l<<endl;

	return 0;
}
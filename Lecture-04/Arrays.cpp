// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[100];// 10^6
	cout<<"Enter the numbers you want to enter:";
	cin>>n; // this should be less than the size of array
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int i=0;
	while(i<5){
		cin>>a[i];
		i++;
	}

	for(i=4;i>=0;i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
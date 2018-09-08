// FindPair
#include <iostream>
using namespace std;

int main(){
	int a[]={2,4,5,4,3,1};
	int n=sizeof(a)/sizeof(int);
	int x=6;
	for(int i=0;i<n;i++){
		int find=x-a[i];
		for(int j=i+1;j<n;j++){
			if(a[j]==find){
				cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
			}
		}
	}

	cout<<endl;
	return 0;
}
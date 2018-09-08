// ArraysToFunc
#include <iostream>
using namespace std;

void SUM(int a[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=a[i];
	}
	a[0]=100;
	cout<<ans<<endl;
}


int main(){

	int a[100];
	for(int i=0;i<10;i++){
		a[i]=i;
	}

	SUM(a,10);
	cout<<a[0]<<endl;
	cout<<endl;
	return 0;
}
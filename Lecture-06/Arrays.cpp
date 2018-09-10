// Arrays
#include <iostream>
using namespace std;

int SUM(int *a,int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=a[i];
	}


	return ans;
}

int main(){
	int a[100];

	int n=5;
	for(int i=0;i<n;i++){
		a[i]=i;
	}

	cout<<SUM(a,n)<<endl;





	return 0;
}
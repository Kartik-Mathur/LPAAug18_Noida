#include <iostream>
using namespace std;

void REV(int *a,int n){

	int i=0;
	int j=n-1;
	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}

	return;

}

int * ReturnPointer(){
	int x=10;
	int *xptr=&x;

	return xptr;
}

int main(){
	int a[100];
	int n=10;

	for(int i=0;i<n;i++){
		a[i]=i;
	}


	REV(a,n);	
		
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
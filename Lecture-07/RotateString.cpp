// RotateString
#include <iostream>
using namespace std;

int length(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){

	char a[]="Coding";

	int r=4;
	int len=length(a);
	// cout<<len<<endl;
	int j=len;

	while(j>=0){
		a[j+r]=a[j];
		j--;
	}
	int i=0;
	j=len;
	while(i<r){
		a[i]=a[j];
		i++;
		j++;
	}
	a[len]='\0';

	cout<<a;

	cout<<endl;
	return 0;
	
}










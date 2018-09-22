// 
#include <iostream>
using namespace std;

int main(){
	char a[]="ABCD";
	char b[100];

	strcpy(b,a);
	cout<<a<<endl;
	cout<<b<<endl;

	cout<<strlen(a)<<endl;

	int c[]={1,2,3,4};
	cout<<&c<<endl;
	cout<<&c+1<<endl;

	return 0;
}

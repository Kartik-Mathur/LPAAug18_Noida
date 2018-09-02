#include <iostream>
using namespace std;
int x=50;// Global variable

int main(){

	int x=20;
	int i=15;
	for(int i=0;i<10;i++){
		x=i;
	}
	cout<<x<<endl;
	::x=::x+2;
	cout<<(::x)<<endl;

	return 0;
}


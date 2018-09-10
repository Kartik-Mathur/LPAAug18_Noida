// PointerFunc
#include <iostream>
using namespace std;

void update(int *x){
	*x=*x+1;
	return;
}


int main(){
	int a=10;

	update(&a);
	cout<<a<<endl;

	return 0;
}
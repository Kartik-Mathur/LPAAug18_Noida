// Celsius
#include <iostream>
using namespace std;

int main(){
	int inival,fval,step;
	cin>>inival>>fval>>step;

	int f=inival;
	int c;

	while(f<=fval){

		c=(5/9.0)*(f-32);
		cout<<f<<" "<<c<<endl;

		f=f+step;
	}





	return 0;
}
// CallbyValue
#include <iostream>
using namespace std;

void swap1(int &a,int &b){

	int temp=a;
	a=b;
	b=temp;
	cout<<"In swap1 a :"<<a<<"b : "<<b<<endl;	// 20 10
}


int main(){
// a=10 , b= 20
	int x,y;
	cin>>x>>y;

	swap1(x,y);

	cout<<"In Main a :"<<x<<"b : "<<y<<endl; // 10 20


	cout<<endl;
	return 0;
}
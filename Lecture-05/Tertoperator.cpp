// Tertoperator
#include <iostream>
using namespace std;

int main(){

	int a;
	cin>>a;

	// (condition)?(work:true):(work:false)
	(a>0)?cout<<"Positive":cout<<"Negative";

	bool isEven;
	isEven=(a%2==0)?1:0;
	cout<<isEven;


	cout<<endl;
	return 0;
}
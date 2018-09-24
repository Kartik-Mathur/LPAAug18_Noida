// TowerofHanoi

#include <iostream>
using namespace std;

void toh(int n,char source,char helper,char desitnation){
	// base case
	if(n==0){
		return;
	}

	// recursive case
	toh(n-1,source,desitnation,helper);
	cout<<"Taking disk "<<n<<" from "<<source<<" to "<<desitnation<<endl;
	toh(n-1,helper,source,desitnation);
}


int main(){

	int n;
	cin>>n;

	toh(n,'a','b','c');

	cout<<endl;
	return 0;
}
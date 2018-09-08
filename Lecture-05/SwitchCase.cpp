// SwitchCase
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	switch(ch){
		case 'n': 
		case 'N': cout<<"North";
					break;
		case 's':
		case 'S': cout<<"South";
					break;
		case 'e':
		case 'E':cout<<"East";
					break;
		case 'w':
		case 'W': cout<<"West";
					break;
		default: cout<<"Invalid";

	}



	cout<<endl;
	return 0;
}
// Strings
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[]="abc";
	// To initialize a string
	string s1("Hello Coding Blocks!");
	string s2(a);

	string s[10]={"apple","mango","banana","guava","kiwi"};
	string k;
	cin>>k;
	// getline(cin,s); // to input string with withspaces
	for(int i=0;i<5;i++){
		if(s[i]==k){
			cout<<"Found"<<endl;
			break;
		}
	}


	return 0;
}
// Pallindrome
#include <iostream>
using namespace std;

int length(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

bool isPallindrome(char a[]){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int main(){
	char b[100];
	cin.getline(b,100);

	if(isPallindrome(b)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Palindrome"<<endl;
	}



	cout<<endl;
	return 0;
}
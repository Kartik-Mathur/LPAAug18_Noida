// AppendStrings
#include <iostream>
using namespace std;

int length(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){

	char a[100];
	char b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	int lena=length(a);
	int lenb=length(b);
	int i=lena;
	for(int j=0;j<=lenb;j++){
		a[i]=b[j];
		i++;
	}
	cout<<a<<endl;






	cout<<endl;
	return 0;
}

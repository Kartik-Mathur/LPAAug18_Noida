// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char *a,char *b,int i,int j){
	if(a[i]=='\0'){
		b[j]='\0';
		cout<<b<<endl;
		return;
	}
 // Take a[i] first and print subsequences
	b[j]=a[i];
	Subsequences(a,b,i+1,j+1);
// leave a[i] here at print subsequences
	Subsequences(a,b,i+1,j);

}


int main(){
	char a[]="abc";
	char b[100];

	Subsequences(a,b,0,0);

	cout<<endl;
	return 0;
}
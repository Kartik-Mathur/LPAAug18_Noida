// Functions
#include <iostream>
using namespace std;

// return type "name" (parameters){

// }

// void printHello()- function declaration
void printHello(int ); // Forward Declaration


int SUM(int a,int b){
	int ans=a+b;
	return ans;
}

int sqr(int n){
	return (n*n);
}

int main(){
	int n;
	cin>>n;
	printHello(n); // Function calling
	// int a,b;
	// cin>>a>>b;

	// int ans=SUM(a,b);
	// cout<<ans<<endl;

	// ans=sqr(a);
	// cout<<ans;
	// cout<<endl;
	return 0;
}

void printHello(int x){
	cout<<"Hello world!"<<x;

	return;
}


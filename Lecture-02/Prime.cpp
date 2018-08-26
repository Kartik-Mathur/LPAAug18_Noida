// Prime
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number to be checked : ";
	cin>>n;

	int j=2;
	while(j<=n-1){
		if(n%j==0){
			cout<<"Not prime!";
			return 0;
		}

		j=j+1;
	}

	cout<<"Prime";

	return 0;
}
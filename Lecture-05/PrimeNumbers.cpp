// PrimeNumbers
#include <iostream>
using namespace std;

bool isPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void GeneratePrime(int n){
	for(int i=2;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
	return;
}


int main(){
	int n;
	cin>>n;
	GeneratePrime(n);

	cout<<endl;
	return 0;
}
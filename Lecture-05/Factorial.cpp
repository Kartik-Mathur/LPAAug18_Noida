// Factorial
#include <iostream>
using namespace std;

int fact(int n){
	int ans=1;

	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return ans;
}

int nCr(int n, int r){

	int ans=fact(n)/(fact(n-r)*fact(r));
	return ans;

}



int main(){

	int n,r;
	cin>>n>>r;


	cout<<nCr(n,r);




	cout<<endl;
	return 0;
}
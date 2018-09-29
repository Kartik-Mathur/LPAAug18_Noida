// Nstair
#include <iostream>
using namespace std;

int Nstairs(int n){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	return Nstairs(n-1)+Nstairs(n-2)+Nstairs(n-3);

}

// For K steps max at a time
int Nstairs1(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=Nstairs1(n-i,k);
	}

	return ans;

}

int Ways(int n,int m){
	// base case
	if(n==0 && m==0){
		return 1;
	}
	if(n<0 || m<0){
		return 0;
	}

	int ans=Ways(n-1,m)+Ways(n,m-1);
	return ans;
}

int ElephantWays(int n,int m){
	if(n==0 && m==0){
		return 1;
	}
	if(n<0 || m<0){
		return 0;
	}

	int sum=0;
	for(int k=1;k<=n;k++){
		sum+=ElephantWays(n-k,m);
	}
	for(int k=1;k<=m;k++){
		sum+=ElephantWays(n,m-k);
	}
	return sum;
}


int main(){

	int n,k;
	cin>>n>>k;

	// cout<<Nstairs(n)<<endl;
	// cout<<Nstairs1(n,k)<<endl;
	// cout<<Ways(n,k)<<endl;
	cout<<ElephantWays(n-1,k-1)<<endl;


	return 0;
}
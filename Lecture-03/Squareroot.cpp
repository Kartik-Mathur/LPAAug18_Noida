// Squareroot
#include <iostream>
using namespace std;

int main(){
	int n,precision;
	cin>>n>>precision;
	float i=0;
	float inc=1;
	int current_precison=0;
	while(current_precison<=precision){
		
		while(i*i<=n){
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;
		current_precison=current_precison+1;
	}
	cout<<i<<endl;




	return 0;
}
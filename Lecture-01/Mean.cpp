// Mean
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int l=INT_MIN;
	int s=INT_MAX;
	float n,no;
	int sum=0;
	cin>>n;
	int i=1;
	while(i<=n){
		cin>>no;

		if(no>l){
			l=no;
		}
		if(no<s){
			s=no;
		}
		sum=sum+no;

		i=i+1;
	}

	cout<<"Largest is"<<l<<endl;
	cout<<"Smallest is "<<s<<endl;
	cout<<"Mean is "<<sum/n;

	return 0;
}
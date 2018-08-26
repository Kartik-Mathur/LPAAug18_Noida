// Pattern1
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of rows to print ";
	cin>>n;

	int spaces;
	int i=1;
	while(i<=n){
		spaces=1;
		while(spaces<=n-i){
			cout<<" ";
			spaces=spaces+1;
		}

// Print the increasing order numbers
		int j=1;
		int no=i;
		while(j<=i){
			cout<<no;
			no=no+1;
			j=j+1;
		}
// print the decreasing numbers
		no=no-2;
		j=1;
		while(j<=i-1){
			cout<<no;
			no=no-1;
			j=j+1;
		}
		cout<<endl;
		i=i+1; 
	}




	return 0;
}
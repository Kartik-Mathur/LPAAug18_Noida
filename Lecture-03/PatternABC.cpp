// PatternABC
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int i=1;
	while(i<=n){
		char ch='A';
		int j=1;
		while(j<=n-i+1){
			cout<<ch;
			ch++;
			j++;
		}
		ch--;

		j=1;
		while(j<=n-i+1){
			cout<<ch;
			ch--;
			j++;
		}
		cout<<endl;
		i++;
	}












	return 0;
}
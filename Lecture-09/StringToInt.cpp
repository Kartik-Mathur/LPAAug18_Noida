#include <iostream>
using namespace std;

int StringToInt(char *a,int i){
	// base case
	if(i==0){
		return 0;
	}


	// recursive case
	int last_digit=a[i-1]-'0';
	int ans=StringToInt(a,i-1)*10+last_digit;

	return ans;
}

int main(){
	char a[]="1234";
	int n=StringToInt(a,4);
	cout<<n<<endl;
	cout<<n/10;
	cout<<endl;
	return 0;
}
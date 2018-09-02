#include <iostream>
using namespace std;

int main(){
	int spaces,digits,alpha,other;
	spaces=0;
	digits=0;
	alpha=0;
	other=0;
	char ch;
	ch=cin.get();

	while(ch!='$'){
		if(ch>='0' && ch<='9'){
			digits++;
		}
		else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
			alpha++;
		}
		else if(ch==' '|| ch=='\n'){
			spaces++;
		}
		else{
			other++;
		}
		ch=cin.get();
	}

	cout<<"Characters : "<<alpha<<endl;
	cout<<"Digits : "<<digits<<endl;
	cout<<"Spaces : "<<spaces<<endl;
	cout<<"Other : "<<other<<endl;


	return 0;
}
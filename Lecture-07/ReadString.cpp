#include <iostream>
using namespace std;

void readLine(char b[],char delimit='\n'){

	char ch;
	int i=0;
	ch=cin.get();
	while(ch!=delimit){
		b[i]=ch;
		i++;
		ch=cin.get();
	}
	b[i]='\0';
}

int length(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

int main(){
	char b[100];
	int x;
	cin>>x;
	cin.ignore(); // cin.get()
	cin.getline(b,100);
	// cin.get();
	// readLine(b);
	cout<<b<<endl;
	cout<<x<<endl;
	// cout<<length(b)<<endl;
	// cin>>b; // Only to read words, cin automatically appends NULL at the end
	// cout<<x<<endl;
	// cout<<b<<endl;
	return 0;
}





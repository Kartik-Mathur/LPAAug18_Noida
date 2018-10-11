// stack
#include <iostream>
#include "stack.h"
using namespace std;

class book{
public:
	int price;
	char name[20];

	book(char *n,int p){
		strcpy(name,n);
		price=p;
	}

	void print(){
		cout<<"Name  :"<<name<<endl;
		cout<<"Price :"<<price<<endl<<endl;
	}

	void setValue(char *n ,int p){
		strcpy(name,n);
		price=p;
	}

};

ostream& operator<<(ostream& os,book b1){
	b1.print();
	return os;
}

istream& operator>>(istream&is,book &b1){
	char a[20];
	cin>>a;
	int p;
	cin>>p;
	b1.setValue(a,p);
	return is;

}

int main(){
	stack <book>s;
	book b1("C++",150);
	book b2("Java",100);
	book b3("C#",100);
	
	cout<<"Enter A book ";
	cin>>b1>>b2>>b3;
	s.push(b1);
	s.push(b2);
	s.push(b3);
	// for(int i=0;i<10;i++){
	// 	s.push(i);
	// }
	cout<<b1<<b2<<b3<<endl;
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}


	return 0;
}
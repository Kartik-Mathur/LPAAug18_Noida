// Inbuilt_Heap
#include <iostream>
#include <queue>
#include <functional>
#include <cstring>
using namespace std;

class Person{
public:
	char name[20];
	int age;
	int money;

	Person(char *name,int age,int money){
		strcpy(this->name,name);
		this->age=age;
		this->money=money;
	}

	void print(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<money<<endl;
	}
};
class MeraComparator{
public:
	bool operator()(Person a,Person b){
		return a.age<b.age;
	}
};

void print_heap(priority_queue <int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}	
	cout<<endl;
}

int main(){

	// priority_queue <Person,vector<Person>,MeraComparator > h;

	// Person p1("Shivang",18,500);
	// Person p2("Dhruv",20,200);
	// Person p3("Vatsal",22,250);

	// h.push(p1);
	// h.push(p2);
	// h.push(p3);

	// while(!h.empty()){
	// 	Person p=h.top();
	// 	p.print();
	// 	h.pop();
	// }

	priority_queue <int,vector<int>,greater<int> > h;

	int k,cs;
	cs=0;
	k=3;
	int data;
	while(1){
		cin>>data;
		if(data==-1){
			print_heap(h);
		}
		else if(cs<k){
			h.push(data);
			cs++;
		}
		else{
			if(h.top()<data){
				h.pop();
				h.push(data);
			}
		}

	}












	return 0;
}

// LinkedList_Queue
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};


class queue{
	node* front;
	node* rear;
	int cs;

public:

	queue(){
		front=rear=NULL;
		cs=0;
	}


	void push(int data){
		if(front==NULL){
			node* n=new node(data);
			front=rear=n;
			cs++;
		}
		else{
			node* n=new node(data);
			rear->next=n;
			rear=n;
			cs++;
		}
	}

	void pop(){
		if(front==NULL){
			return;
		}
		else if(front->next==NULL){
			// that means there is only a single element in queue
			delete front;
			front=rear=NULL;
			cs--;
		}
		else{
			node* temp=front;
			front=front->next;
			delete temp;
			cs--;
		}
	}

	int size(){
		return cs;
	}

	bool empty(){
		return cs==0;
	}

	int getfront(){
		return front->data;
	}

};


int main(){

	queue q;
	for(int i=0;i<=10;i++){
		q.push(i);
	}

	while(!q.empty()){
		cout<<q.getfront()<<" ";
		q.pop();
	}
	cout<<endl;


	return 0;
}
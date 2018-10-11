#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "node.h"
using namespace std;
template <typename T>
class stack{
	node<T>* head;
	int count;
public:
	stack(){
		head=NULL;
		count=0;
	}

	void push(T data){
		node<T>* n=new node<T>(data);
		n->next=head;
		head=n;
		count++;
	}

	void pop(){
		node<T>* temp=head;
		if(head!=NULL){
			head=head->next;
			delete temp;
			count--;
		}
	}

	T top(){
		return head->data;
	}

	bool empty(){
		return count==0;
	}

	int size(){
		return count;
	}
};

#endif
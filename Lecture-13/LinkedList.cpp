#include <iostream>
using namespace std;


class node{
public:
	int data;
	node *next;

	node(int d):data(d),next(NULL){

	}

	// ~node(){
	// 	if(next!=NULL){
	// 	// cout<<"Deleting Node "<<data<<endl;

	// 		delete next;
	// 		next=NULL;
	// 	}
	// }
};

class LinkedList{

	node* recursiveSearchHelper(node* start,int key){
		if(start==NULL){
			return NULL;
		}
		else if(start->data==key){
			return start;
		}
		else{
			return recursiveSearchHelper(start->next,key);
		}
	}

public:
	node* head;
	node* tail;

	LinkedList(){
		head=NULL;
		tail=NULL;
	}

	void InsertAtFront(int data){
		if(head==NULL){
			node*n=new node(data);
			n->next=head;
			head=tail=n;
		}
		else{
			node* n=new node(data);
			n->next=head;
			head=n;
		}
	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<endl;
	}

	void InsertAtEnd(int data){
		if(head==NULL){
			node* n=new node(data);
			head=tail=n;
		}
		else{
			node* n=new node(data);
			tail->next=n;
			tail=n;
		}
	}

	int length(){
		node* temp=head;
		int count=0;
		while(temp!=NULL){
			count++;
			temp=temp->next;
		}
		return count;
	}

	void InsertAtMid(int data,int pos){
		if(pos==0){
			InsertAtFront(data);
		}
		else if(pos>length()){
			InsertAtEnd(data);
		}
		else{
			node* temp=head;
			int count=1;

			while(count<=pos-1){
				count++;
				temp=temp->next;
			}
			node* n=new node(data);
			n->next=temp->next;
			temp->next=n;
		}
	}

	void DeleteAtFront(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	void DeleteAtEnd(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete tail;
			temp->next=NULL;
			tail=temp;
		}
	}

	void DeleteAtMid(int pos){
		if(pos==0){
			DeleteAtFront();
		}
		else if(pos>=length()){
			DeleteAtEnd();
		}
		else{
			node* temp=head;
			int count=1;

			while(count<=pos-1){
				count++;
				temp=temp->next;
			}
			node* n=temp->next;
			temp->next=n->next;
			n->next=NULL;
			delete n;
		}

	}

	node* mid(){
		node* slow;
		node* fast;
		slow=head;
		fast=head->next;

		while(fast!=NULL){
			fast=fast->next;
			if(fast!=NULL){
				fast=fast->next;
				slow=slow->next;
			}
		}
		return slow;
		// while(fast!=NULL && fast->next!=NULL){
		// 	slow=slow->next;
		// 	fast=fast->next->next;
		// }
	}


	node* recursiveSearch(int key){
		return recursiveSearchHelper(head,key);

	}


	// ~LinkedList(){
	// 	if(head!=NULL){
	// 		delete head;
	// 		head=tail=NULL;
	// 	}
	// }

};


node *merge(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node* c;
	if(a->data<=b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;

}




int main(){

	LinkedList l,l1;

	l.InsertAtEnd(1);
	l.InsertAtEnd(3);
	l.InsertAtEnd(5);
	l.InsertAtEnd(6);
	l.InsertAtEnd(8);

	l1.InsertAtEnd(2);
	l1.InsertAtEnd(4);
	l1.InsertAtEnd(7);
	l1.InsertAtEnd(8);

	l.head=merge(l.head,l1.head);
	l.print();
	cout<<endl;

	return 0;
}
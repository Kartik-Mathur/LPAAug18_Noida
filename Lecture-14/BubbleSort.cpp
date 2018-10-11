#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

node* takeInput(){
	node* head=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		node* n=new node(data);
		n->next=head;
		head=n;
		cin>>data;
	}
	return head;
}

int getsize(node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

void BubbleSort(node*& head){
	int n=getsize(head);
	for(int i=0;i<n;i++){
		node* current=head;
		node* prev=NULL;
		node* n;
		while(current!=NULL && current->next!=NULL){
			if(current->data>current->next->data){
				if(prev==NULL){
					n=current->next;
					current->next=n->next;
					n->next=current;
					head=prev=n;
				}
				else{
					n=current->next;
					current->next=n->next;
					prev->next=n;
					n->next=current;
					prev=n;
				}
			}
			else{
				n=current->next;
				prev=current;
				current=n;
			}
		}
	}
}


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

node* mid(node* head){
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
}
	
node* mergeSort(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}

	// Divide
	node*m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	// Sort
	a=mergeSort(a);
	b=mergeSort(b);

	// Merge
	node* newHead=merge(a,b);
	return newHead;
}

void reverseLL(node* &head){
	node* current=head;
	node* prev=NULL;
	node* n;
	while(current!=NULL){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
}


int main(){
	node* head=NULL;
	head=takeInput();
	print(head);
	head=mergeSort(head);
	print(head);
	reverseLL(head);
	print(head);
	return 0;
}
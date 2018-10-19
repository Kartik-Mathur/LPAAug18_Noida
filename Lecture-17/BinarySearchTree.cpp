// BinarySearchTree
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d):data(d),left(NULL),right(NULL){

	}
};


node* InsertInBST(node* root,int d){

	if(root==NULL){
		root=new node(d);
		return root;
	}

	if(root->data<d){
		root->right=InsertInBST(root->right,d);
	}
	else{
		root->left=InsertInBST(root->left,d);
	}
	return root;

}


node* createTree(){
	node* root=NULL;
	int d;
	cin>>d;

	while(d!=-1){
		root=InsertInBST(root,d);
		cin>>d;
	}
	return root;
}

void LevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}


node* SearchInBST(node* root,int key){
	if(root==NULL){
		return NULL;
	}
	else if(root->data==key){
		return root;
	}
	else if(root->data<key){
		return SearchInBST(root->right,key);
	}
	else{
		return SearchInBST(root->left,key);
	}
}

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data<=max && root->data>=min && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

node* ArrayToLL(node* root,int *a,int s,int e){
	// base Case
	if(s>e){
		return NULL;
	}

	// Recrusive Case
	int mid=(s+e)/2;
	root=new node(a[mid]);
	root->left=ArrayToLL(root->left,a,s,mid-1);
	root->right=ArrayToLL(root->right,a,mid+1,e);

	return root;

}

class LinkedList{
public:
	node* head;
	node* tail;
};


LinkedList Tree2LL(node* root){
	LinkedList l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}

	// case
	if(root->right==NULL && root->left!=NULL){
		LinkedList left_LL=Tree2LL(root->left);
		left_LL.tail->right=root;
		l.head=left_LL.head;
		l.tail=root;
	}
	else if(root->left==NULL && root->right!=NULL){
		LinkedList right_LL=Tree2LL(root->right);
		root->right=right_LL.head;
		l.head=root;
		l.tail=right_LL.tail;
	}
	else if(root->right==NULL&&root->left==NULL){
		l.head=l.tail=root;
	}
	else{
		LinkedList left_LL=Tree2LL(root->left);
		LinkedList right_LL=Tree2LL(root->right);

		left_LL.tail->right=root;
		root->right=right_LL.head;
		l.head=left_LL.head;
		l.tail=right_LL.tail;
	}
	return l;
}

void print(LinkedList l){

	node* temp=l.head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->right;
	}
	cout<<endl;
}


class Pair{
public:
	int height;
	bool balance;
};

Pair IsBalanced(node* root){
	Pair p;
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}
	Pair left=IsBalanced(root->left);
	Pair right=IsBalanced(root->right);
	if(abs(left.height-right.height)<=1 && left.balance && right.balance){
		p.balance=true;
	}
	else{
		p.balance=false;
	}

	p.height=max(left.height,right.height)+1;
	return p;

}


int main(){
	// int a[]={1,3,5,6,7,8,9,10};
	// int n=sizeof(a)/sizeof(int);
	// node* root=NULL;
	node* root=createTree();
	LevelOrder(root);
	cout<<endl;
	// LinkedList l=Tree2LL(root);
	// print(l);
	Pair p=IsBalanced(root);
	if(p.balance){
		cout<<"balance"<<endl;
		cout<<"height "<<p.height<<endl;
	}
	else{
		cout<<"Not balance"<<endl;
		cout<<"height "<<p.height<<endl;
	}
	cout<<endl;
	return 0;
}
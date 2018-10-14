#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};

node* createTree(){
	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}
	else{
		node* root=new node(d);
		root->left=createTree();
		root->right=createTree();
		return root;
	}
}

void preorder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){
	if(root==NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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

int CountNodes(node* root){
	if(root==NULL){
		return 0;
	}

	return 1+CountNodes(root->left)+CountNodes(root->right);
}

int Height(node* root){
	if(root==NULL){
		return 0;
	}

	int leftH=Height(root->left);
	int rightH=Height(root->right);
	return 1+max(leftH,rightH);
}

int diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1=Height(root->left)+Height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	return max(op1,max(op2,op3));
}

void mirror(node* root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

node* LevelInput(){
	node* root=NULL;
	int d;
	cout<<"Enter the root node : ";
	cin>>d;
	root=new node(d);
	queue <node* >q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		int c1,c2;
		cout<<"Enter the children of "<<temp->data<<" ";
		cin>>c1>>c2;
		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}

	}
	return root;
}

int main(){

	node* root=NULL;
	root=LevelInput();

	LevelOrder(root);
	mirror(root);
	LevelOrder(root);
	return 0;
}
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

class Pair{
public:
	int height;
	int diameter;
};


Pair fastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.height=max(left.height,right.height)+1;

	// Diameter
	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));
	return p;

}
int index1=0;
node* makeTree(int *pre,int *in,int s,int e){
	if(s>e){
		return NULL;
	}
	node* root;
	int data=pre[index1];
	index1++;
	root=new node(data);
	int k=-1;
	for(int i=s;i<=e;i++){
		if(in[i]==data){
			k=i;
			break;
		}
	}
	root->left=makeTree(pre,in,s,k-1);
	root->right=makeTree(pre,in,k+1,e);
	return root;
}

int main(){
	node* root=NULL;
	root=createTree();
	Pair p=fastDiameter(root);
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};
	int n=sizeof(pre)/sizeof(int);
	node* c=makeTree(pre,in,0,n-1);
	LevelOrder(c);
	cout<<endl;
	cout<<p.height<<" "<<p.diameter<<endl;
	return 0;
}
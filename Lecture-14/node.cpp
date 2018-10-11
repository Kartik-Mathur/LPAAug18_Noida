#include <iostream>
#include "node.h"
using namespace std;

int main(){
	node* head;
	head=new node(5);
	cout<<head->data<<endl;

	return 0;
}
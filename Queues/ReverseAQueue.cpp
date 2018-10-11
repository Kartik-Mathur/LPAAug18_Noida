// ReverseAQueue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
}

void reverseQueue(queue <int> &q){
	if(q.empty()){
		return;
	}

	int element=q.front();
	q.pop();
	reverseQueue(q); // choti list reverse ho gai hogi!
	q.push(element);
}


int main(){
	queue <int> q;
	stack <int> s;
	for(int i=0;i<5;i++){
		q.push(i);
	}
	reverseQueue(q);
	print(q);
	cout<<endl;
 // Push all the elements of queue into the stack
	while(!q.empty()){
		int data=q.front();
		s.push(data);
		q.pop();
	}

// Push all the elements from the stack into the queue again
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}

	print(q);

	return 0;
}
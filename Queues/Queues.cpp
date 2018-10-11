#include <iostream>
using namespace std;


class queue{
	int* a;
	int f;
	int r;
	int cs;
	int ts;
public:
	queue(){
		ts=4;
		a=new int[ts];
		r=ts-1;
		f=0;
		cs=0;
	}

	void push(int data){
		if(!full()){
			r=(r+1)%ts;
			a[r]=data;
			cs++; // Increment the current size!
		}
	}

	void pop(){
		if(!empty()){
			f=(f+1)%ts;
			cs--;
		}
	}

	bool empty(){
		return cs==0;
	}

	bool full(){
		return cs==ts;
	}

	int front(){
		return a[f];
	}

	int size(){
		return cs;
	}
};


int main(){
	queue q;

	for(int i=1;i<=5;i++){
		q.push(i);
	}

	q.pop();
	q.push(6);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}


	return 0;
}
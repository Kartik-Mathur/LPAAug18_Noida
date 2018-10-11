// vector_stack
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class stack{
	vector <T> v;
public:
	void push(T data){
		v.push_back(data);
	}

	void pop(){
		v.pop_back();
	}

	T top(){
		return v[v.size()-1];
	}

	bool empty(){
		return v.size()==0;
	}

};

int main(){

	stack <char>s;

	s.push('A');
	s.push('B');
	s.push('C');

	// for(int i=0;i<10;i++){
	// 	s.push(i);
	// }
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}	


	return 0;
}
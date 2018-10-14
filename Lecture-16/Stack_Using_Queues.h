#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class stack{
	queue <T> q1;
	queue <T> q2;
public:

	void push(T data){
		if(!q1.empty() && q2.empty()){
			q1.push(data);
		}
		else if(!q2.empty() && q1.empty()){
			q2.push(data);
		}
		else{
			q2.push(data);
		}
	}

	void pop(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()>1){
				T data=q1.front();
				q1.pop();
				q2.push(data);
			}
			q1.pop();
		}
		else if(!q2.empty() && q1.empty()){
			while(q2.size()>1){
				T data=q2.front();
				q2.pop();
				q1.push(data);
			}
			q2.pop();
		}
	}

	T top(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()>1){
				T data=q1.front();
				q1.pop();
				q2.push(data);
			}
			T ans=q1.front();
			q2.push(ans);
			q1.pop();
			return ans;
		}
		else if(!q2.empty() && q1.empty()){
			while(q2.size()>1){
				T data=q2.front();
				q2.pop();
				q1.push(data);
			}
			T ans=q2.front();
			q1.push(ans);
			q2.pop();
			return ans;
		}		
	}

	bool empty(){
		return (q1.empty() && q2.empty());
	}

};
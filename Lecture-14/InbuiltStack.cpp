// InbuiltStack
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a){
	stack<char> s;
	for(int i=0;a[i]!='\0';i++){
		char ch=a[i];

		switch(ch){
			case '(':
			case '{':
			case '[': s.push(ch);
						break;
			case ')': if(!s.empty() && s.top()=='('){
							s.pop();
							break;
						}		
						else{
							return false;
						}	
			case ']': if(!s.empty() && s.top()=='['){
							s.pop();
							break;
						}		
						else{
							return false;
						}
			case '}': if(!s.empty() && s.top()=='{'){
							s.pop();
							break;
						}		
						else{
							return false;
						}										
		}
	}

	return s.empty();
}


int main(){
	char a[]="[ a + [ b+ (c + d)] + (e + f) ]";

	if(isBalanced(a)){
		cout<<"Balanced"<<endl;
	}	
	else{
		cout<<"Not Balanced"<<endl;
	}
	// s.push()
	// s.pop()
	// s.top()
	// s.empty()



	return 0;
}

#include <iostream>
using namespace std;

int main(){
	char ch;
	int x=0,y=0;

	ch=cin.get();

	while(ch!='\n'){
		if(ch=='N'){
			y++;
		}
		else if(ch=='S'){
			y--;
		}
		else if(ch=='W'){
			x--;
		}
		else if(ch=='E'){
			x++;
		}
		ch=cin.get();
	}

	cout<<x<<" "<<y<<endl;
	if(x>=0 && y>=0){ // First Quad
		while(x>0){
			cout<<"E";
			x--;
		}
		while(y>0){
			cout<<"N";
			y--;
		}
	}
	else if(x<=0 && y>=0){// Second Quad
		while(y>0){
			cout<<"N";
			y--;
		}

		while(x<0){
			cout<<"W";
			x++;
		}
	}
	else if(x<=0 && y<=0){
		while(y<0){
			cout<<"S";
			y++;
		}
		while(x<0){
			cout<<"W";
			x++;
		}
	}
	else {
		while(x>0){
			cout<<"E";
			x--;
		}
		while(y<0){
			cout<<"S";
			y++;
		}
	}










	return 0;
}
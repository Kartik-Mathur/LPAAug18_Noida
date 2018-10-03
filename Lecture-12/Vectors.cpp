// Vectors
#include <iostream>
using namespace std;

class Vector{
public:
	int *arr;
	int cs;
	int ms;

	Vector(){
		cs=0;
		ms=4;
		arr=new int[ms];
	}

	Vector(int i){
		cs=0;
		ms=i;
		arr=new int[ms];
	}

	Vector(Vector &X){
		arr=new int[X.ms];
		ms=X.ms;
		cs=X.cs;
		for(int i=0;i<X.size();i++){
			arr[i]=X.arr[i];
		}

	}

	void push_back(int val){
		if(cs==ms){
			ms=2*ms;
			int *oldarr=arr;
			arr=new int[ms];
			for(int i=0;i<cs;i++){
				arr[i]=oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs]=val;
		cs++;
	}

	void pop_back(){
		cs--;
	}

	int size(){
		return cs;
	}
	int capacity(){
		return ms;
	}

	int operator[](int i){
		return arr[i];
	}
};



int main(){

	Vector v;
	for(int i=0;i<=10;i++){
		v.push_back(i*10);
	}
	Vector a(v);
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}
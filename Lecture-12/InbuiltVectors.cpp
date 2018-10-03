// Vectors
#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector <int> v;

	for(int i=10;i>=0;i--){
		v.push_back(i);
	}
	sort(v.begin(),v.end());

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	// cout<<endl;
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// cout<<v.max_size()<<endl;
	cout<<endl;


	return 0;
}
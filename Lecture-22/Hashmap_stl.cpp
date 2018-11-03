// Hashmap_stl
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
	map <string,int> h;
	auto i=5;
	cout<<i<<endl;
	h.insert(make_pair("Mango",100));
	pair <string,int> p("Apple",150);
	h.insert(p);

	h["PineApple"]=50;
	string a="Mango";
	if(h.count(a)){
		cout<<"Price of "<<a<<" is "<<h[a]<<endl;
	}
	else{
		cout<<"Does not Exist"<<endl;
	}

	for(auto i:h){
		cout<<i.first<<"-->"<<i.second<<endl;
	}


	return 0;
}
#include <iostream>
#include <list>
#include <map>
#include <climits>
#include <set>
using namespace std;


template<typename T>
class Graph{
	map<T,list<pair<T,int> > > h;
public:

	void addEdge(T u,T v,int d,bool bidir=true){
		h[u].push_back(make_pair(v,d));
		if(bidir){
			h[v].push_back(make_pair(u,d));			
		}
	}

	void print(){
		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<"("<<neighbours.first<<","<<neighbours.second<<")";
			}cout<<endl;
		}
	}

	void dijkstras(T src){
		map<T,int> dist;
		set<pair<int,T> >s;

		for(auto node:h){
			dist[node.first]=INT_MAX;
		}


		dist[src]=0;
		s.insert(make_pair(0,src));

		while(!s.empty()){
			auto p=*(s.begin());
			s.erase(s.begin());

			T parent=p.second;
			int ParentDist=p.first;

			for(auto children:h[parent]){
				if(dist[children.first]>ParentDist+children.second){
					auto f=s.find(make_pair(dist[children.first],children.first));
					if(f!=s.end()){
						s.erase(f);
					}
					dist[children.first]=ParentDist+children.second;
					s.insert(make_pair(dist[children.first],children.first));
				}
			}


		}

		for(auto i:dist){
			cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
		}
		cout<<endl;
	}

};

int main(){
	Graph<string> g;

	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Jaipur","Mumbai",8);

	g.dijkstras("Amritsar");






	return 0;
}
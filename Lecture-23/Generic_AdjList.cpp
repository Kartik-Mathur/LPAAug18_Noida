// Generic_AdjList
#include <iostream>
#include <queue>
#include <map>
#include <climits>
#include <list>
using namespace std;

template <typename T>
class Graph{
	map<T,list<T> >adjList;

public:

	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void print(){
		for(auto i:adjList){
			cout<<i.first<<"-->";
			for(auto neighbours:i.second){
				cout<<neighbours<<", ";
			}cout<<endl;
		}
	}

	void bfs(T src){
		queue<T> q;
		map<T,bool> visited;

		q.push(src);
		visited[src]=true;

		while(!q.empty()){
			T temp=q.front();
			q.pop();
			cout<<temp<<" ";

			for(auto children:adjList[temp]){
				if(!visited[children]){
					q.push(children);
					visited[children]=true;
				}
			}
		}
		cout<<endl;
	}

	int SSSP(T src,T des){
		queue<T> q;
		map<T,int> dist;
		map<T,T> parent;

		for(auto i:adjList){
			dist[i.first]=INT_MAX;
		}

		q.push(src);
		dist[src]=0;
		parent[src]=src;

		while(!q.empty()){
			T node=q.front();
			q.pop();

			for(auto children:adjList[node]){
				if(dist[children]==INT_MAX){
					dist[children]=dist[node]+1;
					parent[children]=node;
					q.push(children);
				}

			}
		}

		for(auto i:adjList){
			cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<dist[i.first]<<endl;
		}

		return dist[des];
	}

	int snake(T src,T des){
		queue<T> q;
		map<T,T> parent;
		map<T,int> dist;
	
		for(auto i:adjList){
			dist[i.first]=INT_MAX;
		}

		q.push(src);
		dist[src]=0;
		parent[src]=src;

		while(!q.empty()){
			T temp=q.front();
			q.pop();

			for(auto children:adjList[temp]){
				if(dist[children]==INT_MAX){
					dist[children]=dist[temp]+1;
					parent[children]=temp;
					q.push(children);
				}
			}
		}

		T temp=des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src;
		cout<<endl;
		return dist[des];
	}

	void dfsHelper(T src,map<T,bool> &visited){
		cout<<src<<" ";
		visited[src]=true;

		for(auto neighbours:adjList[src]){
			if(!visited[neighbours]){
				dfsHelper(neighbours,visited);
			}
		}
	}


	int dfs(T src){
		map<T,bool> visited;
		dfsHelper(src,visited);
		int component=1;

		for(auto node:adjList){
			if(!visited[node.first]){
				dfsHelper(node.first,visited);
				component++;
			}
		}
		cout<<endl;
		return component;
	}

};


int main(){

	Graph<int> g;
	// int board[50] = {0};
	// board[2] = 13;
	// board[5] = 2;
	// board[9] = 18;
	// board[18] = 11;
	// board[17]=-13;
	// board[20] = -14;
	// board[24] = -8;
	// board[25] = -10;
	// board[32] = -2;
	// board[34] = -22;

	// for(int i=0;i<=36;i++){
	// 	for(int dice=1;dice<7;dice++){
	// 		int u=i;
	// 		int v=u+dice+board[u+dice];
	// 		g.addEdge(u,v,false);	
	// 	}
	// }



	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(13,15);
	g.addEdge(13,14);
	g.addEdge(103,104);

	// g.addEdge("Modi","Trump");
	// g.addEdge("Modi","Yogi");
	// g.addEdge("Putin","Modi");
	// g.addEdge("Putin","Trump");
	// g.addEdge("Putin","Pope");
	// g.addEdge("Yogi","Prabhu");
	// g.addEdge("Prabhu","Modi");

	cout<<g.dfs(0)<<endl;
	// cout<<g.snake(1,36)<<endl;


	return 0;

}
#include <iostream>
#include <map>
#include <queue>
#include <list>
#include <climits>
using namespace std;


class Graph{
    map<int ,list<int>> m;
public:
    void addEdge(int u,int v,bool bidir=false){
        m[u].push_back(v);
        if(bidir){
            m[v].push_back(u);
        }
    }

    int SnakeAndLadder(int src,int des){
        queue <int> q;
        map<int,int> dist;
        map<int,int> parent;

        for(auto i:m){
            dist[i.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        parent[src]=src;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto children:m[node]){
                if(dist[children]==INT_MAX){
                    dist[children]=dist[node]+1;
                    parent[children]=node;
                    q.push(children);
                }
            }
        }

        int temp=des;
        while(parent[temp]!=temp){

            cout<<temp<<"<-";
            temp=parent[temp];

        }
        cout<<src<<endl;

        return dist[des];
    }

    void DFSHelper(int node,map<int ,bool> &visited){
        cout<<node<<" ";
        visited[node]=true;

        for(auto children:m[node]){
            if(!visited[children]){
                DFSHelper(children,visited);
            }
        }

    }


    int DFS(){
        map<int ,bool> visited;
        int component=0;
        for(auto i:m){
            if(!visited[i.first]){
                component++;
                DFSHelper(i.first,visited);
            }
        }
        cout<<endl;
        return component;

    }


};


int main(){
    Graph g;
/*
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

    for(int u=0;u<=36;u++){
        for(int dice=6;dice>=1;dice--){
            int v=u+dice+board[u+dice];
            g.addEdge(u,v);
        }

    }
    cout<<g.SnakeAndLadder(0,36);
*/
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(5,6);
    g.addEdge(8,7);

    cout<<g.DFS();

}








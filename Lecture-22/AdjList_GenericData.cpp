#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <climits>
using namespace std;

template <typename T>
class Graph{
    map<T,list<T>> m;
public:
    void addEdge(T u,T v,bool bidir=true){
        m[u].push_back(v);
        if(bidir){
            m[v].push_back(u);
        }
    }

    void print(){
        for(auto i:m){
            // Iterate over the HashMap
            // i.first gives the key
            cout<<i.first<<"->";
            for(auto neighbours:i.second){
            // i.second gives the value bucket
            // which is nothing but the list
                cout<<neighbours<<", ";
            }
            cout<<endl;
        }

    }

    void BFS(T src){
        queue <T> q;
        map <T,bool> visited;

        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            T node=q.front();
            q.pop();
            cout<<node<<" ";

            for(auto neighbours:m[node]){
                if(!visited[neighbours]){
                    q.push(neighbours);
                    visited[neighbours]=true;
                }
            }

        }
    }

    void SSSP(T src){
        queue <T> q;
        map<T,int> dist;
        map<T,T> parent;

        for(auto i:m){
            dist[i.first]=INT_MAX;
        }

        q.push(src);
        dist[src]=0;
        parent[src]=src;

        while(!q.empty()){
            T node=q.front();
            q.pop();

            for(auto children:m[node]){
                if(dist[children]==INT_MAX){
                    dist[children]=dist[node]+1;
                    parent[children]=node;
                    q.push(children);
                }
            }
        }
        for(auto i:dist){
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }
    }

};


int main(){
    Graph <int> g;
/*
    g.addEdge("Trump","Modi",true);
    g.addEdge("Modi","Yogi",true);
    g.addEdge("Yogi","Prabhu");
    g.addEdge("Prabhu","Modi");
    g.addEdge("Putin","Modi");
    g.addEdge("Putin","Trump");
    g.addEdge("Putin","Pope");
*/
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.SSSP(0);

    return 0;
}














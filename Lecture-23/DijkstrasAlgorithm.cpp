#include <iostream>
#include <set>
#include <list>
#include <map>
#include <climits>
using namespace std;

template <typename T>
class Graph{
    map <T,list<pair<T,int>>> h;
public:
    void addEdge(T u,T v,int d,bool bidir=true){
        h[u].push_back(make_pair(v,d));
        if(bidir){
            h[v].push_back(make_pair(u,d));
        }
    }

    void print(){
        for(auto i:h){
            cout<<i.first<<"->";
            for(auto neighbours:i.second){
                cout<<"("<<neighbours.first<<","<<neighbours.second<<") ";
            }
            cout<<endl;
        }

    }

    void SSSP(T src){
        map<T,int> dist;

        for(auto i:h){
            dist[i.first]=INT_MAX;
        }

        set<pair<int,T>> s;
        // distance is taken as first parameter of set because
        // set store values in sorted order according to first parameter
        dist[src]=0;
        s.insert(make_pair(0,src));

        while(!s.empty()){
            auto p=*(s.begin());

            T node=p.second;
            int nodeDist=p.first;
            // erase the first element from the set
            s.erase(s.begin());

            // Iterate over the neighbours of node
            for(auto childrens:h[node]){
                if(nodeDist+childrens.second<dist[childrens.first]){
                    T val=childrens.first;
                    auto f=s.find(make_pair(dist[val],val));
                    if(f!=s.end()){
                        s.erase(make_pair(dist[val],val));
                    }
                    dist[val]=nodeDist+childrens.second;
                    s.insert(make_pair(dist[val],val));

                }
            }
        }
        for(auto i:dist){
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }

    }


};


int main(){
    Graph<string> g;

    g.addEdge("Amritsar","Agra",1);
    g.addEdge("Amritsar","Jaipur",4);
    g.addEdge("Delhi","Jaipur",2);
    g.addEdge("Delhi","Agra",1);
    g.addEdge("Agra","Bhopal",2);

    g.SSSP("Delhi");


}





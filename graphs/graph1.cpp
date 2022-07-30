#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,int direction){
        adj[u].push_back(v);

        //if undirected 
        if(direction ==0){
            adj[v].push_back(u);
        }

    }

     void printing(){
        for(auto i:adj){

            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
     }
};

int main(){
    //int n;
    //cout<<"enter no of nodes"<<endl;
    //int m;
    //cout<<"enter no of edges"<<endl;
    graph g;
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.printing();


}

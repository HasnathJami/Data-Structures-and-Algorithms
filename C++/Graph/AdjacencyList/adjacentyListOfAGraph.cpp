#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> adj[1000];
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    for(int i=1;i<=nodes;i++)
    {
        cout<<i<<"--> ";
        for(int j=0;j<adj[i].size();j++)
        {

            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}

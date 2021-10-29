#include <iostream>
#include <stack>
#include <vector>
#include <string.h>
using namespace std;

vector<int>adjList[100];
bool visited[100];

void dfs(int sn)
{

    int x=sn;
    if(visited[x]==true) return ;
    visited[x]=true;
    cout<<x<<" ";


    for(int i=0; i<adjList[x].size(); i++)
    {
        int y=adjList[x][i];
        dfs(y);

    }



}


int main()
{

    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int x,y;
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));

    dfs(1);
    cout<<endl;


}

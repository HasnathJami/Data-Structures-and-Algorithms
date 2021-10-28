#include <iostream>
#include <vector>
#include<queue>
#include<string.h>
using namespace std;


void bfs( vector<int> adjList[],int startingNode)

{

    bool visited[100];
    memset(visited,false,sizeof(visited));

    queue<int>q;
    q.push(startingNode);
    visited[startingNode]=true;

    while(q.empty()==false)
    {
        int x=q.front();
        q.pop();

        cout<<x<<" ";

        for(int i=0; i<adjList[x].size(); i++)
        {
            int y=adjList[x][i];
            if(visited[y]==0)
            {
                visited[y]=1;
                q.push(y);
            }
        }
    }
    cout<<endl;


}


int main()
{
    vector<int> adjList[100];

    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }


    bfs(adjList,1);






}

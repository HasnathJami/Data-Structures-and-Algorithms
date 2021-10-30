#include <iostream>
#include <stack>
#include <vector>
#include <string.h>
using namespace std;

void dfs(vector<int>adjList[],int sn)
{
    bool visited[100];
    memset(visited,false,sizeof(visited));
    stack<int>s;

    int x=sn;
    s.push(x);
    cout<<x<<" ";

    while(s.empty()==false)
    {
        int u=s.top();
        //s.pop();
        visited[u]=true;


        for(int i=0; i<adjList[u].size(); i++)
        {
            int y=adjList[u][i];

            if(visited[y]==false)
            {

                cout<<y<<" ";
                visited[y]=true;
                //s.push(u);
                s.push(y);
                break;


            }

            if(i==adjList[u].size()-1)
                s.pop();

        }




    }

    cout<<endl;

}



int main()
{
    vector<int>adjList[100];
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int x,y;
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    dfs(adjList,1);




}


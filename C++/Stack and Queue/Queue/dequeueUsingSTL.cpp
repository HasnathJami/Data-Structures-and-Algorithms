//deque is very strong stl, it can be used as array and queue both with
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque <int>d;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
       // cin>>d[i];
       int inp;
       cin>>inp;
       d.push_back(inp);
       //d.push_front(inp);

    }


    for(int i=0;i<n;i++)
    {
        //if(d[i]%2==0) continue;
        cout<<d[i]<<" ";
    }
    cout<<endl;


}

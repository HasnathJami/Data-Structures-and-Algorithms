#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int>s;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        s.push(inp);
    }



    //for(int i=0;i<n;i++)
    while(s.empty()==false)
    {
         cout<<s.top()<<" ";
         s.pop();

    }
    cout<<endl;

}

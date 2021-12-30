//Time Complexity = 0(log(b)) best   0(log(b)) worst case
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int power(int n,int b)
{

    if(b==0)return 1;


    long long recStore=power(n,b/2);

    if(b%2==0)
    {
        return (recStore*recStore)%M;
    }
    else
    {

        //return (n*(recStore*recStore)%M)%M; //error for brackets
        return (n*((recStore*recStore)%M))%M;
    }


}


int main()
{
    int n,b;
    cin>>n>>b;
    cout<<power(n,b)<<endl;

}

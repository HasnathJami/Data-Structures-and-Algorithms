//Time Complexity = 0(log(b)) best   0(b/2) worst case
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

double power(int n,int b)
{

    long long res=1;
    long long store=b;

    if(b<0) b=(-1)*b;


    while(b>0)
    {
        if(b%2==0)
        {
            n=(n*1LL*n)%M;
            b=b/2;
        }
        else{
             res=(res*n)%M;
             b=b-1;
        }
    }

    if(store<0)
    {
        return 1.0/(double)res;
    }

    return (double)res;


}




int main()
{
     int n,b;
     cin>>n>>b;
     cout<<power(n,b);

}


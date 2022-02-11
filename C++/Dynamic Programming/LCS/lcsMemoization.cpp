#include <iostream>
#include <string.h>
using namespace std;
const int N=1e3+7;
int dp[N][N];

int lcs(string &s1,string &s2,int n,int m)
{


    // memset(dp,-1,sizeof(dp));
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            dp[i][j]=-1;
        }
    }


    if(dp[n][m]!=-1)
        return dp[n][m];

    if(n==0|| m==0)
        return 0;

    else if(s1[n]==s1[m])
    {
        dp[n][m]= 1+lcs(s1,s2,n-1,m-1);

    }

    else
        dp[n][m]= max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));


    return dp[n][m];

}

int main()
{


    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    int m=s2.size();

    cout<<lcs(s1,s2,n,m)<<endl;
}

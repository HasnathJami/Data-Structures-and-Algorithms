#include <iostream>
using namespace std;
const int N=1005;
int dp[N][N];
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    int m=s2.size();
    string lcs;

//    for(int i=0; i<N; i++)
//    {
//        for(int j=0; j<N; j++)
//        {
//            dp[i][j]=-1;
//        }
//    }

    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<m+1; j++)
        {

            if(i==0|| j==0)
            {
                dp[i][j]=0;
                continue;
            }

            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                lcs=lcs+s1[i-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }


        }
    }
    cout<<dp[n][m]<<endl;
    cout<<lcs<<endl;
}

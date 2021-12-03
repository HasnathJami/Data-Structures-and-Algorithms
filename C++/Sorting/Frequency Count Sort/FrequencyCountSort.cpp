#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main()
{

    FASTER
    int n;
    cin>>n;
    int a[n];
    map<int,int>f;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }

    for(int i=0; i<1000000; i++)
    {
        if(f[i]==1)
        {
            cout<<i<<" ";

        }

        else if(f[i]>1)
        {
            for(int j=1; j<=f[i]; j++)
            {
                cout<<i<<" ";
            }
        }

    }

    cout<<endl;
}

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

int mod = 1e9+7;


int main()
{
    FASTER
    ll n;
    cin>>n;
    ll v[n];
    ll x;
    cin>>x;


    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v,v+n);

    for(ll i=1; i<=x; i++)
    {
        ll key,check=0;
        cin>>key;

        ll high=n-1;
        ll low=0;
        ll mid;


        while (low <= high)
        {
            mid = (low + high) / 2;

            if (v[mid] == key)
            {
                check=1;
                break;

            }

            else if (v[mid] < key)
                low = mid + 1;

            else
                high = mid - 1;
        }


        if(check==0)
        {
            ll a=llmax,b=llmax;
            if(low<n)
              a=v[low];

             if(low-1>=0)
             b=v[high];


             cout<<min(abs(key-a),abs(key-b))<<endl;

            // ll mini=min(abs(key-a),abs(key-b));
            //ll mini=min(abs(key-v[high]),abs(key-v[low]));
            //  cout<<mini<<endl;

        }

        else
            cout<<0<<endl;



    }


}






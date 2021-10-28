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
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    sort(v.begin(),v.end());
    int key;
    cin>>key;

    int high=n-1;
    int low=0;
    int mid;


    while(high-low>1)
    {
        mid=(high+low)/2;

        if(v[mid]<key)
        {
            low=mid+1;
        }

        else
        {
            high=mid;
        }
    }


    if(v[high]==key)
    {
        cout<<"Found at Index:"<<high<<endl;
    }

    else if(v[low]==key)
    {
        cout<<"Found at Index:"<<low<<endl;
    }

    else
    {
        cout<<"Not Found"<<endl;
    }


}

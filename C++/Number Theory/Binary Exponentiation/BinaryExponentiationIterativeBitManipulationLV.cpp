//Time Complexity = 0(log(b)) best   0(log(b)) worst case
#include <bits/stdc++.h>
using namespace std;
const int mod= 1e9+7;

int power(int n,int b)
{
    int ans=1;

    while(b)
    {
        if(b&1) /* for odd number checking. It also checks the 0 bits.
            It does multiplication if last bit is 1 for the
             contribution purposes. As we know, for 1101 ,
             bit 0 does not contribute, 8+4+0+1=13 */
        {
            ans=(ans*1LL*n)%mod;
        }
        n=(n*1LL*n)%mod;
        b=b>>1;

    }

    return ans;


}

int main()
{
    int n,b;
    cin>>n>>b;

    cout<<power(n,b)<<endl;
}

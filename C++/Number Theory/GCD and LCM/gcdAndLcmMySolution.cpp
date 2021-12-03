#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b)
{
    int maxi=1; // if not condition is fulfill then gcd is 1

    if(a==0)
        return b;
    if(b==0)
        return a;

    for(int i=2; i<=min(a,b); i++) // gcd must be in  2 to <=min(a,b) // gcd always less than equal small number from a and b
    {
        if(a%i==0 && b%i==0)
        {
            maxi=max(maxi,i);
        }
    }

    return maxi;
}

int lcm(int a,int b)
{
    int maxi=max(a,b);
    int mini=min(a,b);

    // lcm will be in a*b if two number is not can not be divided with a specific number

    int store=maxi;
    while((maxi%mini)!=0)
    {
        maxi=maxi+store;
    }

    return maxi;

}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"GCD or HCF = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<lcm(a,b)<<endl;


}

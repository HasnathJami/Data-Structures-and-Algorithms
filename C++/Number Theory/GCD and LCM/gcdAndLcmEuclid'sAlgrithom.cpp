#include <iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b)
{
    //if(b%a==0) return a;

    if(a==0) return b;

    return gcd(b%a,a);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"GCD or HCF = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<(a*b)/gcd(a,b)<<endl;
}

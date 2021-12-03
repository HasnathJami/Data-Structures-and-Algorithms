#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    int tA;
    while(a!=0)
        //while(a>0)
    {
        tA=a;
        a=b%a;
        b=tA;
    }

    return b;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"GCD or HCF = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<(a*b)/gcd(a,b)<<endl;



}

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"GCD is= "<<__gcd(a,b)<<endl;
    cout<<"LCM is= "<<(a*b)/__gcd(a,b)<<endl;
}

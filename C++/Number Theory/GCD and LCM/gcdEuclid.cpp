#include <iostream>
using namespace std;

class GCD{

public:

    int gcd(int a,int b)
    {
        //if(a%b==0) return b; //runtime error occurs when b=0;
        if(b==0) return a; // for avoiding runtime error when a%0, use this condition if(b==0) return a;
        return gcd(b,a%b);
    }


};

int main()
{
    int a,b;
    cin>>a>>b;

    GCD obj;

    cout<<obj.gcd(a,b)<<endl;



}

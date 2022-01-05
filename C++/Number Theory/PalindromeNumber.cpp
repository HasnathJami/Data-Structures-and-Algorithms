#include <iostream>
using namespace std;

class PN
{

public:

    bool palindromeNumber(int n)
    {
        int store=n;
        int result=0;

        while(n>0)
        {
            result= result*10+ (n%10);
            n=n/10;
        }

        if(store==result)
            return true;

        else
            return false;

    }

};

int main()
{
    int n;
    cin>>n;

    PN obj;


    if(obj.palindromeNumber(n))
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }

}


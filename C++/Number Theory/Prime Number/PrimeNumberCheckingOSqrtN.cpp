//Time complexity O(root N)

#include <iostream>
#include <math.h>
using namespace std;

class Prime
{

public:

    bool isPrime(int n)
    {
        for(int i=2; i*i<=n; i++) // we have to run the loop from 2 to root n. Here, i*i<=n or i<=sqrt(n)
        {
            if(n%i==0)
                return false;
        }

        return true;

    }



};

main()
{
    int n;
    cin>>n;
    Prime obj;

    if(obj.isPrime(n))
        cout<<"Prime Number"<<endl;

    else
        cout<<"Not Prime Number"<<endl;



}

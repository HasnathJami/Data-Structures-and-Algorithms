#include <iostream>
using namespace std;

class SOE
{

public:
    int sieveOfEratosthenes(int n)
    {

        bool isPrime[n+1];
        int counter=0;
        for(int i=0; i<n+1; i++)
        {
            isPrime[i]=true;
        }
        isPrime[0]=false;
        isPrime[1]=false;

        for(int i=2; i*i<=n; i++)
        {
            for(int j=2*i; j<=n; j=j+i)
            {
                isPrime[j]=false;
            }
        }

        for(int i=0; i<n+1; i++)
        {
            if(isPrime[i]==true)
            {
                counter++;
            }
        }

        return counter;

    }



};


int main()
{
    int n;
    cin>>n;

    SOE obj;

    cout<<obj.sieveOfEratosthenes(n)<<endl;


}


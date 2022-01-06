#include <iostream>
#include <vector>
using namespace std;

class SOE
{

public:
    void sieveOfEratosthenes(int n)
    {
        vector<int>arr;

        bool isPrime[n+1];
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
            cout<<i<<"="<<isPrime[i]<<endl;
        }

    }



};


int main()
{
    int n;
    cin>>n;


    SOE obj;

    obj.sieveOfEratosthenes(n);




}

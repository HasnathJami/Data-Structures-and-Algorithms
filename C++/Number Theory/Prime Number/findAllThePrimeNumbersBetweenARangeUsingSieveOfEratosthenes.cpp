#include <iostream>
#include <vector>
using namespace std;

class SOE
{

public:
    vector<int> sieveOfEratosthenes(int n)
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
            if(isPrime[i]==true)
            {
                arr.push_back(i);
            }
        }

        return arr;

    }


};


int main()
{
    int n;
    cin>>n;


    SOE obj;

    vector<int> result=obj.sieveOfEratosthenes(n);

    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;


}

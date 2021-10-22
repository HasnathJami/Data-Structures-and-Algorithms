#include <iostream>
using namespace std;

int main()
{
    int a[6]= {3,1,5,4,2,2};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++)
    {
        int mini=i;

        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[mini])
            {
                mini=j;
            }
        }

        if(mini!=i)
        {
            int temp=a[i];
            a[i]=a[mini];
            a[mini]=temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

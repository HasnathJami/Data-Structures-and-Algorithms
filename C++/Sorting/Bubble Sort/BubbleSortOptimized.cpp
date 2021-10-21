#include <iostream>
using namespace std;


int main()
{
    int arr[10]= {14,3,7,17,15,11,0,-50,2,222};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool checkSwap;

    for(int i=0; i<n-1; i++)
    {
        checkSwap=false;
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                checkSwap=true;
            }


        }

        if(!checkSwap)
            break;


    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;


}

#include <iostream>
using namespace std;

void SWAP(int arr[],int i,int j)
{
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}



int main()
{
    int arr[6]= {4,3,7,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
                SWAP(arr,j,j+1);
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    }

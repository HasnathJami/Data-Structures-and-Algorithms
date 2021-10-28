#include <iostream>
#include <algorithm>
using namespace std;


int bin_search(int a[],int start,int finish,int key)
{
    int mid;
    while(start<=finish)
    {
        mid=(start+finish)/2;

        if(a[mid]==key)
            return mid;

        else if(a[mid]>key)
            finish=mid-1;

        else if (a[mid]<key)
            start=mid+1;

    }

    return -1;


}


int main()
{
    int a[6]= {4,1,3,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    int res= bin_search(a,0,n-1,2);

    res==-1 ? cout<<"Searching element not found"<<endl : cout<<"Searching element found at position: "<<res<<endl;


}

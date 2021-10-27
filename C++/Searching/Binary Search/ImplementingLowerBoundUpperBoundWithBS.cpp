#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //int a[5]= {1,7,2,3,5};
   // int a[5]= {1,4,5,7,9};
      int a[6]= {4,5,5,7,8,25};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    int start=0;
    int finish=n-1;
    int mid;
    int key=9;

    while(start<=finish)
    {
        mid=(start+finish)/2;

        if(key==a[mid])
        {
            break;

        }
        else if(key>a[mid])

        {

            start=mid+1;

        }


        else if (key<a[mid])

        {
            finish=mid-1;
        }


    }



    if(key==a[mid])
    {

        cout<<" position= "<<mid<<endl;
        cout<<"Lower bound= "<<a[mid]<<endl;
        cout<<"  position= "<<mid+1<<endl;
        cout<<"Upper Bound= "<<a[mid+1]<<endl;
    }
    else
    {
        cout<<"at position= "<<start<<endl;
        cout<<"Lower bound= "<<a[start]<<endl;
        cout<<endl;

        cout<<"at position= "<<start<<endl;
        cout<<"Upper bound= "<<a[start]<<endl;
    }







}

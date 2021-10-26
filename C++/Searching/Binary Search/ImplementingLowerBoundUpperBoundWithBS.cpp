#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[5]= {1,7,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    int start=0;
    int finish=n-1;
    int mid;
    int key=16;

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

        cout<<"Lower Bound at position= "<<mid<<endl;
        cout<<"VALUE= "<<a[mid]<<endl;
        cout<<"Upper Bound at position= "<<start+1<<endl;
        cout<<"VALUE= "<<a[start]<<endl;
    }
    else
    {
        cout<<"Lower Bound at position= "<<start<<endl;
        cout<<"VALUE= "<<a[start]<<endl;
        // cout<<"Lower Bound at position= "<<finish<<endl;
        //cout<<"VALUE= "<<a[finish]<<endl;

        cout<<"Upper Bound at position= "<<start+1<<endl;
        cout<<"VALUE= "<<a[start]<<endl;
    }







}

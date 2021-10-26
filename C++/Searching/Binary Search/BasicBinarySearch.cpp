#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[5]= {1,4,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    //int check=0;
    int start=0;
    int finish=n-1;
    int mid;
    int key=6;

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
        cout<<"Found at position = "<<mid<<endl;
    }

    else
    {
        cout<<"Not Found"<<endl;
    }




}

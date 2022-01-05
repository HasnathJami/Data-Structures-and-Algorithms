#include <iostream>
#include <math.h>
using namespace std;

class TZ
{

public:

    int tzif(int n)
    {
        int sum=0;

        for(int i=5; i<=n; i=i*5)
        {
            sum=sum+(n/i);
        }

        return sum;

    }

//    int trailingZeroes(int n)
//    {
//
//        int p=5;
//        int count=0;
//        int inc=1;
//
//        while(n/pow(p,inc)>0)
//        {
//            count=count+(n/pow(p,inc));
//            inc++;
//
//        }
//
//        return count;
//
//    }


};

int main()
{
    int n;
    cin>>n;

    TZ obj;
    cout<<obj.tzif(n)<<endl;
    //cout<<obj.trailingZeroes(n)<<endl; //another approach

}

#include <iostream>
#include <algorithm>
using namespace std;



int main()
{

    int a[6]= {4,1,3,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    bool check = binary_search(a,a+n,6);
    check==true ? cout<<"Searching element is present in the array!!!"<<endl : cout<<"Searching element not found!!!!!!!"<<endl;

}

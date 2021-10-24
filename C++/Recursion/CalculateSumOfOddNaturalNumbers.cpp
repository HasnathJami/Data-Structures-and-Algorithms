#include <iostream>
using namespace std;

int oddsum(int n)
{
    if (n==1)
    {
        return 1;
    }

    return n+oddsum(n-2);



}

int main()
{
    int n=5;
    cout<<oddsum(n)<<endl;

}

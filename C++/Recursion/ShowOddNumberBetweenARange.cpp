#include <iostream>
using namespace std;

int oddsum(int n)
{
    if (n==1)
    {
        cout<<1<<" ";
        return 1;
    }


    // cout<<n<<" "; // gives 5 3 1
    //return n+oddsum(n-2);
    n+oddsum(n-2);
    cout<<n<<" "; // gives 1 3 5


}

int main()
{
    int n=5;
   // cout<<oddsum(n)<<endl;
    oddsum(n);
    cout<<endl;
}

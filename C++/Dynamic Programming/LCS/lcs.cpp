#include <iostream>
using namespace std;

int lcs(string &s1,string &s2,int n,int m)
{
    string s;
    if(n==0 || m==0)
    {
         return 0;
    }


    else if(s1[n]==s2[m])
    {
        return 1+lcs(s1,s2,n-1,m-1);
    }


    else
    {
        return max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));

    }


}



int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    int m=s2.size();

    cout<<lcs(s1,s2,n,m)<<endl;

}

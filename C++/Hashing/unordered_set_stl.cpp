// performs insert,search,delete in O(1);

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(30);
    us.insert(40);
    us.insert(50);
    us.insert(60);
    us.insert(70);

    cout<<us.size()<<endl;

    us.erase(20);
     for(auto i=us.begin();i!=us.end();i++)
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;

    if(us.find(20)!=us.end())
    {
        cout<<"Found"<<endl;
    }
    else{

        cout<<"Not Found"<<endl;
    }

     //count(par) function returns only 2 values 0 or 1; If the value is presented in the set then it returns 1  else return 0
    if(us.count(20)==1) cout<<"found"<<endl;
    else if(us.count(20)==0) cout<<"not found"<<endl;

    //us.clear() clear full set

    //erase(inclusive index,exclusive index)
    us.erase(us.find(70),us.find(50));

    for(auto it=us.begin();it!=us.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

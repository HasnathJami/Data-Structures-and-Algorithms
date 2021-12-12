#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <char>st;
    bool check;
    string s;
    cin>>s;


    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
            continue;

        }

        if(!st.empty() && st.top()=='[' && s[i]==']')
        {
            st.pop();
            check=true;
        }

        else if(!st.empty() && st.top()=='{' && s[i]=='}')
        {
            st.pop();
            check=true;
        }

        else if(!st.empty() && st.top()=='(' && s[i]==')')
        {
            st.pop();
            check=true;
        }

        else if(st.empty())
        {
            check =false;
            break;
        }

        else
        {
            check=false;
            break;
        }

    }


    if(!st.empty())
    {
        check=false;
    }


    if(check==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {

        cout<<"No"<<endl;
    }

}


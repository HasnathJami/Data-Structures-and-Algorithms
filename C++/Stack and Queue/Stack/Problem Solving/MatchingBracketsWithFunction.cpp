#include <iostream>
#include <stack>
using namespace std;

bool isMatching(string s)
{
    stack <char>st;
    bool check;

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

        else if(st.empty())  //This condition is for (()) ) situation. Stack is already empty after 4brackets.
        {
            //check =false;
            // break;
            return false;
        }
        else   //This condition is for (}) situation
        {
            return false;
        }

    }

    if(!st.empty()) //This condition is for (){ this situation
    {
        //check=false;
        return false;
    }

    return check;

}


int main()
{
    string s;
    cin>>s;

    if(isMatching(s))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

}

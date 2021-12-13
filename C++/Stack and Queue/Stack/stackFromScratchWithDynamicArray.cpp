/*
  Stack Properties:
  push()
  pop()
  top()
  stackSize()
  isEmpty()
  show()

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t=-1;
int *arr=(int*)malloc(1000*sizeof(int));

void push(int a)
{
    t++;
    arr[t]=a;

}

void pop()
{
    if(t==-1)
        cout<<"Stack is empty"<<endl;
    t--;
}

int top()
{
    if(t==-1)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }

    return arr[t];
}

void stackSize()
{
    cout<<t<<endl;
}

void show()
{
    for(int i=0; i<=t; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isEmpty()
{
    if(t<0)//(t==-1)// for return t-1 = 1-1=0
        return false;

    else
        return true;
}


int main()
{
    int n;
    cin>>n;



    for(int i=0; i<n; i++)
    {
        int inp;
        cin>>inp;
        push(inp);
    }


    while(isEmpty()==true)
    {
        int s=top();
        cout<<s<<" ";
        pop();

    }

    cout<<endl;

}

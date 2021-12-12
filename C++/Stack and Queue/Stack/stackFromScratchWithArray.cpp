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
using namespace std;

int arr[1000],t=0;
//int n=sizeof(arr)/sizeof(arr[0]);

void push(int a)
{
    //if(t>=n)
    //cout<<"Stack is full"<<endl;
    arr[t]=a;
    t++;
}

void pop()
{
    // arr[t]=0;
    t--;
    if(t==-1)
        cout<<"Stack is empty"<<endl;
}

int top()
{
    return arr[t-1];
}

void stackSize()
{
    cout<<t<<endl;
}

void show()
{
    for(int i=0; i<t; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isEmpty()
{
    if(t==0)//(t<1)// for return t-1 = 1-1=0
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

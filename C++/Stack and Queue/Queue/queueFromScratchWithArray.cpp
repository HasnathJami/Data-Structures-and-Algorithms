/*
  queue Properties:
  -----------------
  pushBack() or enqueue()
  popFront() or dequeue()
  Front() or Peak()
  rear i.e.back
  stackSize()
  isEmpty()
  show()

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[1000];
int rear=-1;
int len=sizeof(arr)/sizeof(arr[0]);


void enqueue(int a)
{
    if(rear==len-1)
        cout<<"Queue is full"<<endl;
    else
    {
        rear++;
        arr[rear]=a;

    }

}

void dequeue()
{
    if(rear==-1)
        cout<<"Queue is empty"<<endl;

    /*or i<rear,here i=0 to <=rear,
     if rear =4 thats mean (0,1,2,3,4) index = 5 values of array
     rear-1 for avoiding the shifting of last element with garbage value;  */
    for(int i=0; i<=rear-1; i++)
    {
        arr[i]=arr[i+1];
    }
    rear--;         //for removing last index after left shifting
}

int Front()
{
    return arr[0];
}

void stackSize()
{
    cout<<rear<<endl;
}

void show()
{
    for(int i=0; i<rear; i++) //This loop is like this because rear starts from -1 so rear 4 means 0,1,2,3,4 = 5 values
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isEmpty()
{
    if(rear<0)//(t==-1)// for return t-1 = 1-1=0
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
        enqueue(inp);
    }


   // enqueue(10);
   dequeue();


    while(isEmpty()==true)
    {
        int s=Front();
        cout<<s<<" ";
        dequeue();

    }

    cout<<endl;

}

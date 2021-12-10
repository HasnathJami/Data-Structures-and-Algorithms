//Best case complexity:O(nlogn)
//Worst case complexity:O(n^2)
//Note : if array is already sorted then it will work on O(nlogn)
// Here, we take middle value as pivot element
// Work on: 1 2 3 4 5 or 2 1 3 4 5  i.e:   values<pivot<values // unique values
#include <iostream>
using namespace std;

int partitionForPivot(int arr[],int l,int h)
{

    int pivot=arr[(h+l)/2];
    int i=l;
    int j=h;
    while(i<j)
    {

        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;


        if(i<j)
            swap(arr[i],arr[j]);
    }

    swap(arr[j],arr[(h+l)/2]);

    return j;

}


void QuickSort(int arr[],int l,int h)
{

    if(l<h) // check for at least two elements in the array or all elements are duplicate or not.Otherwise it is meaningless to check sorted array or single element array.
    {
        int pivot=partitionForPivot(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);

    }

}



int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int high=n-1;
    int low=0;


    QuickSort(a,low,high);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

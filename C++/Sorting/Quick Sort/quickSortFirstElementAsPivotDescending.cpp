//Best case complexity:O(nlogn)
//Worst case complexity:O(n^2)
//Note : if pivot element is median it will work in O(nlogn)
//Here, we take last element as pivot
#include <iostream>
using namespace std;

int partitionForPivot(int arr[],int l,int h)
{

    int i=l;
    int j=h;
    int pivot=arr[l]; //or arr[i]
    while(i<j)
    {

        while(arr[i]>=pivot) // condition change for descending order, from <= to >=
            i++;
        while(arr[j]<pivot)  // condition change for descending order, from > to <
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }

    swap(arr[j],arr[l]); // arr[l] for pivot. In case, we use pivot as parameter it gives an error because we have to swapping elements of loop. pivot var is static .


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

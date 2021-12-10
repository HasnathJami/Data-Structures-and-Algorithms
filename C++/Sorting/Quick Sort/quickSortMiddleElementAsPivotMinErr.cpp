//Best case complexity:O(nlogn)
//Worst case complexity:O(n^2)
//Note : if pivot element is median it will work in O(nlogn)
//Here, we take middle element as pivot
#include <iostream>
using namespace std;

void QuickSort(int arr[],int l,int h)
{
    //if(l>=h)  // check for at least two elements in the array or all elements are duplicate or not.Otherwise it is meaningless to check sorted array or single element array.
    //   return ;

    if(l<h)

    {
        int mid=(l+h)/2;
        int pivot=arr[mid];
        int i=l;
        int j=h;

        while(i<j)
        {
            while(arr[i]<pivot)
                i++;

            while(arr[j]>pivot)
                j--;

            if(i<j)
                swap(arr[i],arr[j]);



            //if(i>=j)
               // break;

            for(int i=0; i<5; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;


        }


        QuickSort(arr,l,mid);
        QuickSort(arr,mid+1,h);


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
    //partitionForPivot(a,low,high);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

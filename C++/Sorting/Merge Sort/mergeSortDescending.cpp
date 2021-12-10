#include <iostream>
using namespace std;


void Merge(int a[],int l,int mid,int r,int len)

{
    //int n=sizeof(a)/sizeof(a[0]);
    int b[len];   // Extra space O(N) needed for store sorted element
    int i=l;   //This variable for array A and first half part also
    int m=mid+1; //This variable for second half part's starting.
    int j=l; //This variable for array B

    /*
     Following condition is for checking if first half part of second half
     part is exhausted or not. Whenever, this condition is true
     first half or second half of array A is filled array B by maintaining sorting conditions. If exhausted then loop will be
     break and  we will fill the B array with other half's
     values respectively
     */

    while(i<=mid && m<=r)
    {
        if(a[i]>=a[m]) // Descending order
        {
            b[j]=a[i];
            j++;
            i++;

        }
        else
        {

            b[j]=a[m];
            j++;
            m++;
        }


    }

    if(i>mid)  // condition (Array a is exhausted), so fill Array B with second half part respectively.
    {
        while(m<=r)
        {
            b[j]=a[m];
            j++;
            m++;
        }
    }

    else   // condition (Array b is exhausted), so fill Array B with first half part respectively.
    {

        while(i<=mid)
        {
            b[j]=a[i];
            j++;
            i++;
        }
    }


    for(int k=l; k<=r; k++)
    {
        a[k]=b[k]; //copy array b to array a, Because, array a is the main array.
    }


}

void mergeSort(int a[],int l,int r,int len)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(a,l,mid,len);
        mergeSort(a,mid+1,r,len);
        Merge(a,l,mid,r,len);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int len=n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    mergeSort(a,0,n-1,len);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

}


#include<iostream>

using namespace std;

int qpart(int a[],int low,int high)
{
    int i,j;
    int x=a[high];
    i=low-1;
    for(j=low;j<high-1;j++)
    {
        if(j[a]<x)
        {
            i++;
            swap(i[a],j[a]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

int quicksort(int a[],int high,int low)
{
    int i,j;
    if(low<high)
    {
        j=qpart(a,low,high);
        quicksort(a,low,high);
        quicksort(a,low+1,high);
    }
}

int main()
{

    int a[]={2,6,3,8,5,3,2,9};
    int n=sizeof(a) / sizeof(a[0]);
    quicksort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

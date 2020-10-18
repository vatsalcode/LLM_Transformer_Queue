//divide and conquer algorithm
#include<iostream>

using namespace std;

int part(int a[],int low,int high)
{
     int pivot,i,j;

    pivot=a[low];
    i=low,j=high;
    while(i<j)
    {
        do
        {
            i++;
        }
        while(a[i]<pivot);
        {
            if(i<j)
                swap(a[i],a[j]);

        }

    }
    swap(a[i],a[j]);
    return j;
}

int main()
{
    int a[]={3,4,6,1,7,4,8};
    int n=sizeof(a) / sizeof(a[0]);
    int low=a[0];
    int high=a[n+1];
   cout<<part(a,low,high);
    return 0;
}

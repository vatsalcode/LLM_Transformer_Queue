#include<bits/stdc++.h>

using namespace std;



void rotatearray(int a[],int d,int n)
{
    int i;
    for(i=d;i<n;i++)
        cout<<i[a]<<" ";
    for(i=0;i<d;i++)
        cout<<i[a]<<" ";
}

int main()
{
    int a[]={1 ,2 ,3 ,4 ,5};
    int d=1;
    int n=sizeof(a) / sizeof(a[0]);

    rotatearray(a,d,n);
    return 0;
}

#include<bits/stdc++.h>


using namespace std;

void reqsum(int a[],int k ,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                c++;
            }
        }
    }
    cout<<c;
}

int main()
{
    int a[]={1,1,1,1};
    int k=2;
    int n=sizeof(a) / sizeof(a[0]);

    reqsum(a,k,n);
    return 0;
}

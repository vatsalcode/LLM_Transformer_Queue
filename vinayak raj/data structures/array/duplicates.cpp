#include<bits/stdc++.h>

using namespace std;

void duplicate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<" "<<a[i]<<" ";
            }
        }
    }
}

int main()
{
    int a[]={1,2,3,3,4};
    int n=sizeof(a) / sizeof(a[0]);

    duplicate(a,n);

    return 0;
}

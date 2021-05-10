
#include<bits/stdc++.h>

using namespace std;

vector<int>getsmall(int a[],int n,int k)
{
    vector<int>res;
    for(int i=0;i<n;i++)
        if(a[i]<k)
        res.push_back(a[i]);
    return res;
}

int main()
{
    int k;cin>>k;
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a) / sizeof(a[0]);

    getsmall(a,n,k);
    for(int x:getsmall(a,n,k))
        cout<<x<<" ";


    return 0;
}

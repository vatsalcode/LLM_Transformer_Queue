#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,money,ct=0,mn=INT_MAX,i=0;
    cin>>n>>money;
    ll a[n];
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        mn = min(mn,a[i]);
    }


    while(money>=mn)
    {

        if(money>=a[i])
        {
            money-=a[i];
            ct++;
        }
      i=++i%n;

}
    cout<<ct;
    return 0;
}

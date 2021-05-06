#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,i,cost;
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
	    }
	    sort(a,a+n);
	    cost=a[0]*(n-1);
		cout<<cost<<endl;
	}
	return 0;
}

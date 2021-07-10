#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int a[N];
int main()
{
	int n,k,cnt,x;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=N;i++)
	{
		if(a[i]>k)
	    {
		    cnt++;
	    }
	}
	
	cout<<cnt<<endl;
}

#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int arr[N];
int brr[N];
int main()
{
	int n,m;
	int a[n];
	int b[m];
	cin>>n>>m;
	int q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		arr[a[i]]++;
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		brr[b[i]]++;
	}
	for(int i=0;i<N;i++)
	{
		if(arr[i]>=1 && brr[i]<1)
		{
			cout<<i<<" ";
		}
	}
}

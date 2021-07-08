#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=n-k;i--)
	{
		sum+=arr[i];
	}
	cout<<sum<<endl;
}

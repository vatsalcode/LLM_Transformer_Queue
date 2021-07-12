#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	int k,l,r;
	while(q--)
	{
		cin>>k>>l>>r;
		
		a[l]+=k;
		a[r+1]+=-k;
		
		
	}
	for(int i=0;i<n;i++)
	{
	    a[i]+=a[i-1];
		arr[i]+=a[i];
	}
	cout<<*max_element(arr,arr+n)<<endl;
}

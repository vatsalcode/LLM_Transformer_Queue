#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int a[N];
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		a[arr[i]]++;
	}
	for(int i=0;i<N;i++)
	{
		if(a[i]==1)
		{
			cout<<i<<endl;
		}
	}
}

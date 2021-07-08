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
		a[arr[i]]++;
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=2)
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		cout<<"false"<<endl;
	}
	else
	{
		cout<<"true"<<endl;
	}
}

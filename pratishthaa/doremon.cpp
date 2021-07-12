#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];
int main()
{
	int m,n,c,d,l;
	cin>>m>>n;
	int arr[n];
	int brr[n];
	for(int i=1;i<=m;i++)
	{
		cin>>c>>d;
		a[d]==1;
	}
	bool open=true;
	for(int i=1;i<=n;i++)
	{
		cin>>l;
		if(a[l]==0)
		{
			open=false;
		}
	}
	if(open)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}

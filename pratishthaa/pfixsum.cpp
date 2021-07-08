#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		a[i]=arr[i]+a[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int c,d;
		cin>>c>>d;
		cout<<a[d]-a[c-1]<<endl;
	}
}

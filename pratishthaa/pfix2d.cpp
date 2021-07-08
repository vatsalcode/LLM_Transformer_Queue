#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N][N];
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
			a[i][j]+=a[i][j-1]+a[i-1][j]-a[i-1][j-1]+arr[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int m,n,o,p;
		cin>>m>>n>>o>>p;
		cout<<a[o][p]-a[m-1][p]-a[o][n-1]+a[m-1][n-1]<<endl;
	}
}

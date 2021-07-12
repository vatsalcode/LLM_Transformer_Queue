#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
int main()
{
	int m,n;
	cin>>m>>n;
	int x;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			if(x%2!=0)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;
			}
			a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int b,c,d,e;
		cin>>b>>c>>d>>e;
		cout<<a[d][e]-a[d][c-1]-a[b-1][e]+a[b-1][c-1]<<endl;
	}
}

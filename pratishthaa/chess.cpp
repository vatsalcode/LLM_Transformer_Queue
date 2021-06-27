#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,x,y;
		cin>>n>>a>>b;
		x=2*(180+n);
		y=a+b;
		cout<<x-y<<endl;	
	}
	return 0;
}

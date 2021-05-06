#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,m;
	int c;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		m=2048;
		c=0;
		while(m>0)
		{
			c+=n/m;
			n=n%m;
			m=m/2;
		}
		cout<<c<<endl;
	}
	return 0;
}

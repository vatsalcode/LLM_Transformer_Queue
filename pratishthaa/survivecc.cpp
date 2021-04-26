#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,a,b,c,d,e;
		cin>>x>>y>>a>>b>>c;
		d=x/a;
		e=y/b;
		if((min(d,e))>=c)
		{
			cout<<"YES"<<endl;
		}
		else
		    cout<<"NO"<<endl;
	}
	return 0;
}

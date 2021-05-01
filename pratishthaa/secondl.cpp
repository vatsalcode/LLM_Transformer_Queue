#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if((a<b && a>c) || (a>b && a<c))
		{
			cout<<a<<endl;
		}
        if((b<c && b>a) ||(b>c && b<a))
		{
			cout<<b<<endl;
		}
		if((c<b && c>a) ||(c>b && c<a))
		{
			cout<<c<<endl;
		}		
	}
	return 0;
}

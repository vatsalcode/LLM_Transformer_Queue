#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		while(c--)
		{
			if(a<b)
			{
				a=a+1;
			}
			if(a>b)
			{
				b=b+1;
			}
		}
		if(a==b)
		{
			cout<<"0"<<endl;
		}
		if(a<b)
		{
			cout<<b-a<<endl;
		}
		if(a>b)
		{
			cout<<a-b<<endl;
		}
	}
	return 0;
}

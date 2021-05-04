#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,area,gcd,i;
		cin>>a>>b;
		area=a*b;
		if(a==0)
		{
			gcd=b;
		}
		if(b==0)
		{
			gcd=a;
		}
		for(i=1;i<=a && i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				gcd=i;
			}
		}
		int m=area/(gcd*gcd);
		cout<<m<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int t,i,gcd,lcm;
	cin>>t;
	while(t--)
	{
		int a,b,gcd,lcm;
		cin>>a>>b;
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
		lcm=(a*b)/gcd;
		cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}

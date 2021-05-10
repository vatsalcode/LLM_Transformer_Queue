#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float a,b,c,g;
		cin>>a;
		if(a<1500)
		{
			b=0.1*a;
			c=0.9*a;
		}
		if(a>=1500)
		{
			b=500;
			c=0.98*a;
		}
		g=a+b+c;
		printf("%.2lf",g);
		printf("\n");

	}
	printf("\n");
}

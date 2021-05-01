#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		float b;
		float c;
		cin>>a>>b;
		if(a<=1000)
		{
			c=a*b;
		}
		if(a>1000)
		{
			c=(a*b)-(0.1*(a*b));
		}
		printf("%.6lf",c);
	}return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int d;
	for(int i=2;c>0;i++)
	{
		if(i%a==0 || i%b==0)
		{
			c--;
			d=i;
		}
	}
	int lcm;
	for(int i=1;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	}
	int step;
	if(d%a==0 && d%b==0){
		step=lcm;
	}
	else if(d%a==0 && d%b!=0)
	{
		step=a;
	}
	else if(d%a!=0 && d%b==0)
	{
		step=b;
	}
	for(int i=d;i>=0;i=i-step)
	{
		cout<<i<<" ";
	}
}

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,c;
		int rev=0;
		cin>>a;
		n=a;
		while(a!=0)
		{
			c=a%10;
			rev=rev*10+c;
			a=a/10;
		}
		if(rev==n)
		{
			cout<<"wins"<<endl;
		}
		else
		{
			cout<<"loses"<<endl;
		}
	}
	return 0;
}

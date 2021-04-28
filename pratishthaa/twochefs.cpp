#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c=0;
		if(n%5==0)
		{
			while(n%10!=0)
			{
				n=n*2;
				c++;
			}
			cout<<c<<endl;
		}
		else
		cout<<"-1"<<endl;
	}
	return 0;
}

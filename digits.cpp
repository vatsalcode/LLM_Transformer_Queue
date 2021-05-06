#include<iostream>
using namespace std;
int main()
{
	int n,r,s;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++)
	{
		while(n!=0)
		{
			n=n/10;
			c++;
		}
	}
	if(c<=3)
	{
		cout<<c<<endl;
	}
	else
	{
		cout<<"More than 3 digits"<<endl;
	}
	return 0;
}

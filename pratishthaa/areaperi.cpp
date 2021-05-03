#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b;
	c=2*(a+b);
	d=a*b;
	if(c<d)
	{
		cout<<"Area"<<endl;
		cout<<d<<endl;
	}
	else if(c>d)
	{
		cout<<"Peri"<<endl;
		cout<<c<<endl;
	}
	else
	{
		cout<<"Eq"<<endl;
		cout<<c<<endl;
	}
	return 0;
}

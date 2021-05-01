#include<iostream>
using namespace std;
int fun(int A)
{
	if(A==1||A==2||A==3)
	{
		return 0;
	}
	if(A>=4)
	{
		return (A-2)/2+fun(A-2);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a;
		cout<<fun(a)<<endl;
	}
	return 0;
}

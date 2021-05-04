#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b;
		int count=0;
		for(int i=0;i<a;i++)
		{
			cin>>c;
			d=c+b;
			if(d%7==0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

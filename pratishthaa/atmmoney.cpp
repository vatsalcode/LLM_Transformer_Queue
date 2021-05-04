#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int m[a];
		for(int i=0;i<a;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<a;i++)
		{
			if(m[i]<=b)
			{
				cout<<"1";
				b=b-m[i];
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}

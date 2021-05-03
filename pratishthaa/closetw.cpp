#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c[a]={0};
	while(b--)
	{
		string s;
		cin>>s;
		if(s=="CLICK")
		{
			int i;
			cin>>i;
			if(c[i-1]==0)
			    c[i-1]=1;
			else
			   c[i-1]=0;
		}
		if(s=="CLOSEALL")
		{
			for(int i=0;i<a;i++)
			{
				c[i]=0;
			}
		}
		int count=0;
		for(int i=0;i<a;i++)
		{
			if(c[i]==1)
			    count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

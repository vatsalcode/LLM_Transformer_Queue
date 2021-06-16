#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,d;
	cin>>a>>b;
	int c=0;
	for(int i=a;i<=b;i++)
	{
		d=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				d++;
			}
		}
		c+=d;
	}
	cout<<c<<endl;
	return 0;
}

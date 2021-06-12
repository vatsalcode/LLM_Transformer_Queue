#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d;
		e=a/b;
		int sum;
		if(a%b==0)
		{
			for(int j=1;j<=e;j++)
		    {
		        sum=0;
			    for(int i=1;i<=a;i++)
		        {
			        if(i<=b)
			        {
				        sum=sum+c;
			        }
			        if(i>b && i<=2*b && i<=a)
			        {
				        sum=sum+c+d;
			        }
			        if(i>2*b && i<=a)
			        {
				        sum=sum+c+d+d;
			        }
		        }
		    }
		}
		if(a%b!=0)
		{
			for(int j=1;j<=(e+1);j++)
		        {
		        sum=0;
			    for(int i=1;i<=a;i++)
		        {
			        if(i<=b)
			        {
				        sum=sum+c;
			        }
			        if(i>b && i<=2*b && i<=a)
			        {
				        sum=sum+c+d;
			        }
			        if(i>2*b && i<=a)
			        {
				        sum=sum+c+d+d;
			        }
		        }
		    }
		}
		cout<<sum<<endl;
	}
	return 0;
}

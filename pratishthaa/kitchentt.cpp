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
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int count=0;
		if(a[0]>=b[0])
			{
				count++;
			}
		for(int i=1;i<n;i++)
		{
			
		    if((a[i]-a[i-1])>=b[i])
		    {
		    	count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

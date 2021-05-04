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
		int arr[a];
		for(int i=0;i<a;i++)
		{
			cin>>arr[i];
		}
		int sum=0;
		int count=0;
		int ncount=0;
		for(int i=0;i<a;i++)
		{
			sum=sum+arr[i];
			if(sum<b || sum>b)
			{
				count++;
			}
			else
			{
				ncount++;
				break;
			}
		}
		if(ncount==0)
		{
			cout<<"Yes"<<endl;
			for(int i=0;i<a;i++)
			{
			    cout<<arr[i]<<endl;
			}
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}

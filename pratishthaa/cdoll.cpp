#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a;
		int count=0;
		for(int i=0;i<a;i++)
		{
			cin>>b;
			if(b%2!=0)
			{
				count++;
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}

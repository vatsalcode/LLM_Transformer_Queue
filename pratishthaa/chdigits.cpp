#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		int ncount=0;
		for(int i=0;i<=s.size();i++)
		{
			if(s[i]=='0')
			{
				count++;
			}
			else
			{
				ncount++;
			}
		}
		if(count==1 || ncount==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}

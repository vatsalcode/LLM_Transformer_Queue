#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		int c=0;
		for(int i=0;i<=s1.size();i++)
		{
			if(s1[i]!=s2[i])
			{
				if(s1[i]=='?' || s2[i]=='?')
				{
					continue;
				}
				else
				    c=1;
				    break;
			}
			
		}
		if(c==1)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}

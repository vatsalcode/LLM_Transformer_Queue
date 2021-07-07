#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int dou[26];
		for(int i=0;i<=s.length();i++)
		{
			dou[s[i]-'a']++;
		}
		int flag;
		for( int i=0;i<=26;i++)
		{
			if(dou[i]>=2)
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		}
		if(flag!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}

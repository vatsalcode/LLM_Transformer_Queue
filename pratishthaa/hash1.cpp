#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		string s;
		cin>>s;
		int dou[26]={0};
		for(int i=0;i<=s.length();i++)
		{
			dou[s[i]-'a']++;
		}
		for( int i=0;i<26;i++)
		{
			if(dou[i]>=2)
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	    string s,p;
		cin>>s>>p;
		int a[26]={0};
		int b[26]={0};
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'a']++;
		}
		for(int j=0;j<p.size();j++)
		{
			b[p[j]-'a']++;
		}
		int cnt=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				cnt++;
			}
		}
		if(cnt==0)
		{
			cout<<"true";
		}
		else
		{
			cout<<"false";
		}
}

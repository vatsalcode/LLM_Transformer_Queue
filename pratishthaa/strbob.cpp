#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
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
			cnt+=abs(a[i]-b[i]);
		}
		cout<<cnt<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		int al[26];
		for(int i=0;i<26;i++)
	    {
	    	al[i]=0;
		}
		l--;r--;
		for(int i=l;i<=r;i++)
		{
			al[s[i]-'a']++;
		}
		int cnt=0;
		for(int i=0;i<26;i++)
		{
			if(al[i]%2!=0)
			{
				cnt++;
			}
		}
		if(cnt>1)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	}
}

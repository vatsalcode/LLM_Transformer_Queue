#include<iostream>
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
		if(s.size()%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int count=1;
			int n=0;
			sort(s.begin(),s.end());
			for(int i=0;i<=s.size();i++)
			{
				if(s[i]==s[i+1])
				{
					count++;
				}
				else
				count=1;
				if(count>n)
				n=count;
			}
			if(n == (s.size())/2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
		}
	}
	return 0;
}

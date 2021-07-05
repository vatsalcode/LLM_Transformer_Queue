#include<bits/stdc++.h>
using namespace std;
char upper(char c)
{
	return 'A'+(c-'a');
}
char lower(char c)
{
	return 'a'+(c-'A');
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=upper(s[i]);
		}
		else
		{
			s[i]=lower(s[i]);
		}
	}
	int sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
		    sum=sum-s[i];
		}
		else
		{
			sum=sum+s[i];
		}
	}
	if(sum<0)
	{
		sum=sum* -1;
	}
	int cnt=0;
	for(int i=2;i<sum;i++)
	{
		if(sum%i==0)
		{
			cnt=1;
		}
	}
	if(cnt==0)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}

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
		int a[4]={0};
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='r')
			{
				a[0]++;
			}
			if(s[i]=='u')
			{
				a[1]++;
			}
			if(s[i]=='b')
			{
				a[2]++;
			}
			if(s[i]=='y')
			{
				a[3]++;
			}
		}
		cout<<*min_element(a,a+4)<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long p=0;
		long long power=1;
		for(int i=n-1;i>=0;i--)
		{
			int bd=s[i]-'0';
			p+=bd*power;
			power=power*2;
		}
		cout<<p<<endl;		
	}
}

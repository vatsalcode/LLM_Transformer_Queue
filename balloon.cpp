#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		int ncount=0;
		for(int i=0;i<=s.size();i++)
		{
			if(s[i]=='a')
			{
				count++;
			}
			if(s[i]=='b')
			{
				ncount++;
			}
		}
		if(count<ncount)
		{
			cout<<count<<endl;
		}
		if(ncount<count)
		{
			cout<<ncount<<endl;
		}
		if(count==ncount)
		{
			cout<<count<<endl;
		}
	}
	return 0;
}

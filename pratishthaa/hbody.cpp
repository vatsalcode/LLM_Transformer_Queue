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
		int l=s.length();
		if(l<4)
		{
			cout<<"Error"<<endl;
		}
		else
		{
			if(s[0]=='<' && s[1]=='/' && s[l-1]=='>')
			{
				int count=0;
				for(int i=2;i<l-1;i++)
				{
					if(isupper(s[i]))
					{
						count+=1;
					}
				}
				if(count>0)
				{
					cout<<"Error"<<endl;
				}
				else
				{
					cout<<"Success"<<endl;
				}
			}
			else
			{
				cout<<"Error"<<endl;
			}
		}
	}
	return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
		    if(s.at(0)=='E'|| s.at(0)=='Q'|| s.at(0)=='U'|| s.at(0)=='I'|| s.at(0)=='N'|| s.at(0)=='O'|| s.at(0)=='X')
		    {
			    a++;
	        }
		    else
	        {
			    b++;
	        }
		}
		if(a>b)
		{
			cout<<"SARTHAK"<<endl;
		}
		else if(a<b)
		{
			cout<<"ANURADHA"<<endl;
		}
		else
		{
			cout<<"DRAW"<<endl;
		}
	}
	return 0;
}

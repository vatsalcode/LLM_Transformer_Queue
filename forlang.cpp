#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,d;
		cin>>a>>b;
		string c[a];
		int count[100]={0};
		for(int i=0;i<a;i++)
		{
			cin>>c[i];
		}
		while(b--)
		{
			cin>>d;
			string e[d];
			for(int i=0;i<d;i++)
			{
				cin>>e[i];
				{
					for(int j=0;j<a;j++)
					{
						if(c[j].compare(e[i])==0)
						{
							count[j]=1;
						}
					}
				}
			}
		}
		for(int i=0;i<a;i++)
	    {
	        if(count[i]==1)
	        {
	            cout<<"YES"<<" ";
	        }
	        else
	        {
	            cout<<"NO"<<" ";
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}

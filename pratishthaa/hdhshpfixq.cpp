#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int al[N][26];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<N;i++)
	    {
		    for(int j=0;j<26;j++)
		    {
			    al[i][j]=0;
		    }
        }
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		
		for(int i=0;i<n;i++)
		{
			al[i+1][s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			for(int j=1;j<=n;j++)
			{
				al[j][i]+=al[j-1][i];
			}
		}
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			int cnt=0;
			int ncnt=0;
			for(int i=0;i<26;i++)
			{
				cnt=al[r][i]-al[l-1][i];
				if(cnt%2!=0)
				{
					ncnt++;
				}
			}
			if(ncnt>1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		if(a[0]!='1')
		{
			cout<<a.insert(0,"1")<<endl;
		}
		else
		{
			cout<<a.insert(1,"0")<<endl;
		}	
	}
	return 0;
}

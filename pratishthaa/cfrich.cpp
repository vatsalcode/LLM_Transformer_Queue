#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if((b-a)%c==0)
		{
			cout<<(b-a)/c<<endl;
		}
		else
		{
			cout<<((b-a)/c)+1<<endl;
		}
	}
	return 0;
}

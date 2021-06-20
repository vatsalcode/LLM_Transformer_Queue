#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(a<=b && c<=d && e>=f)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::toupper);
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i];
		if(s[i]==' ')
		{
			cout<<endl;
		}
	}
}

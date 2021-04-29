#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
        int w=0,x=0,y=0;
        for(int i=0;i<s1.size();i++){
            if((s1[i]!=s2[i]) && (s1[i]!='?' && s2[i]!='?'))
             w++;
            
            else if( ((s1[i]!=s2[i])&& (s1[i]!='?')))
             y++;
             
            else if(((s1[i]!=s2[i])&& (s2[i]!='?'))) 
            y++;
            
            else if((s1[i]==s2[i]) && (s1[i]=='?' && s2[i]=='?'))
             x++;
        }
        cout<<w<<" "<<w+x+y<<endl;
	}
	return 0;
}

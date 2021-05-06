#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string a;
	    stack<char>st;
	    for(int i=0;s[i]!='\0';i++)
	{
	    if(s[i]>='a' && s[i]<='z')
	    a+=s[i];
	     else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
                st.push(s[i]);
            else if(s[i]=='(')
                continue;
            else if(s[i]==')')
            {
                a+=st.top();
                st.pop();
            }
	}
	   cout<<a<<endl; 
	}
	return 0;
}

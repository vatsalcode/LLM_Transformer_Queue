#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
while(n)
	{
	    char s[100000];
	    int count=0;
	    cin>>s;
	    
	    int l=strlen(s);
	    for(int j=0;j<l;)
	    {
	        if(s[j]=='1')
	        {
	            count++;
	            while(s[j]=='1')
	            {
	                j++;
	            }
	        }
	        else
	        {
	        j++;
	        }
	      
	    }
	    
	    cout<<count<<endl;
	    n-=1;
	}
	return 0;
}

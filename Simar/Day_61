#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,c=0,max=0;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='*')
	        {
	         c++;
	         if(c>=max)
	             max=c;
	         }
	         else
	         c=0;
	    }
	    if(max>=k)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

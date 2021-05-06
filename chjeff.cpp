#include<iostream>
using namespace std;
int main()
{
	string s,c;
	cin>>s;
	int n,count;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
	    count=0;
	    for(int k=0;k<c.size();k++)
	    {
		
		    for(int j=0;j<s.size();j++)
		        if(c[k]==s[j])
		        {
			        count=0;
			        break;
		        }
		        else
		        {
		        	count=1;
				}
	    }
    
	    if(count==0)
	    {
		    cout<<"Yes"<<endl;
	    }
	    else
	    {
		    cout<<"No"<<endl;
	    }
    }
	return 0;
}

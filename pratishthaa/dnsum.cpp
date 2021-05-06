#include<iostream>
using namespace std;
int main()
{
	int t,r;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b;
		int sum;
		sum=(b*(b+1))/2;
        for(int i=2;i<=a;i++)
        {
            if(a>1)
            {
        	    sum=(sum*(sum+1))/2;
		    }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r;
		float a,b,c,d,e,f;
		cin>>r;
		cin>>a>>b;
		cin>>c>>d;
		cin>>e>>f;
		float count,ncount,mcount;
		count=sqrt(((a-c)*(a-c))+(b-d)*(b-d));
		ncount=sqrt(((c-e)*(c-e))+(d-f)*(d-f));
		mcount=sqrt(((a-e)*(a-e))+(b-f)*(b-f));
		if((count<=r&&ncount<=r)||(ncount<=r&&mcount<=r)||(mcount<=r&&count<=r))
		{
			cout<<"yes"<<endl;
		}
		else
		{
		    cout<<"no"<<endl;
	    }
    }
	return 0;
}

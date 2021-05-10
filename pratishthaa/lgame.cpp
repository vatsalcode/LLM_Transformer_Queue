#include<iostream>
using namespace std;
int main()
{
	int t,i,j,l,r,p,q;
	r=0;l=0;
	p=0;q=0;
	cin>>t;
	while(t--)
	{
		cin>>i>>j;
		r+=i;
		p+=j;
		if(r>p)
		{
			if(l<(r-p))
			{
				l=(r-p);
				//cout<<l<<' 1'<<endl;
			}
		}
		else
			{
			    if(q<(p-r))
				{
					q=(p-r);
				}	
			}
		}
		if(l>q)
		{
			cout<<"1 "<<l<<endl;
		}
		else{
			cout<<"2 "<<q<<endl;
		}
	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int t,i,c,d,arr[t];
	cin>>t;
	c=0;d=0;
	for(i=0;i<t;i++)
	{
		cin>>arr[i];
	    if(arr[i]%2==0)
		{
			c++;
		}
		else
		{
			d++;
		}
		
	}
	if(c>d)
		{
			cout<<"READY FOR BATTLE"<<endl;
		}
	if(c<=d)
		{
			cout<<"NOT READY"<<endl;
		}
	return 0;
}

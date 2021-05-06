#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	int notes[]={100,50,10,5,2,1};
	int a[t];
	for(j=0;j<t;j++)
	{
		int c=0;
		cin>>n;
		for(i=0;n!=0;)
		{
			if(notes[i]<=n)
			{
				n=n-notes[i];
				c++;
			}
			else
			    i++;
		}
		a[j]=c;
		
	}
	for(i=0;i<t;i++)
		{
			cout<<a[i]<<endl;
		}
	return 0;
}

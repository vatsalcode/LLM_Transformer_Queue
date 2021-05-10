#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#include <limits>
int main()
{
	long long int test,n,k,x,y,i,temp,flag;
	cin>>test;
	for(int p=0;p<test;p++)
	{
		cin>>n>>k;
		long long int q,f;
		temp=0,flag=0;
		for(i=0;i<n;i++)
		{
			cin>>q;
			temp+=q;
			if(temp<k && flag==0)
			{
				f=i;
				flag=1;
			}
			if(flag==0)
			{
				temp=temp-k;
			}
		}
		if(flag==1)
			i=f;
		else
		{
			i=i+temp/k;
		}
		cout<<i+1<<endl;
	}
	return 0;
}

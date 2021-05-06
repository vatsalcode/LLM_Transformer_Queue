#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,h,x,z=0,a[n];
	cin>>n>>h>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(h==x+a[i])
		{
			z=1;
		}
	}
	if(z==1){
	    cout<<"YES";
	}
	else {
	    cout<<"NO";
	}
}

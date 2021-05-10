#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k,l,brr[a],arr[a];
		cin>>a;
		for(int i=0;i<a;i++)
		{
			cin>>b;
			brr[i]=arr[i]=b;
		}
		sort(arr,arr+a);
		for(int i=1;i<=arr[0];i++)
        {
            for(k=0;k<a;k++)
            {
                if(arr[k]%i != 0)
                break;
            }
            if(k==a)
            l = i;
        }
        for(int i=0;i<a;i++)
        {
            cout<<brr[i]/l<<" ";
        }
        cout<<endl;
		
	}
	return 0;
}

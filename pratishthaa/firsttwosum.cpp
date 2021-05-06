#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,arr[100],r;
	cin>>t;
	while(t--)
	{
		int a,j;
		cin>>a;
		for(int i=0;i<a;i++)
		{
			cin>>j;
			arr[i]=j;
		}
        sort(arr,arr+a);
        cout<<arr[0]+arr[1]<<endl;
    }
	return 0;
}

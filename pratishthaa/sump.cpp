#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int brr[N];
int main()
{
	int a,b;
	cin>>a>>b;
	int arr[a];
	int flag=0;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+a);
	int r=a-1;
	int l=0;
	while(l<r)
	{
		if(arr[r]+arr[l]==b)
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
		else if(arr[r]+arr[l]>b)
		{
			r--;
		}
		else
		{
			l++;
		}
	}
	if(flag==0)
	{
		cout<<"NO"<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>arr[i];
		}
		int count=0;
		sort(arr,arr+2*n);
		for(int i=0;i<2*n;i++)
		{
			if(arr[i]!=arr[i+1] && (arr[i]+arr[i+1])%2 !=0)
			{
				count++;
				//continue;
			}
		}
		if(count == n)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

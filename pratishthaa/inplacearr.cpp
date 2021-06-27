#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[15];
	for(int i=0;i<15;i++)
	{
		cin>>arr[i];
	}
	int j=0;
	for(int i=0;i<15;i++)
	{
		if(arr[j]!=arr[i])
		{
			arr[++j]=arr[i];
		}
	}
	cout<<j+1<<endl;
	return 0;
}

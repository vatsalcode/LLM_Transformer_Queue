#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n][n];
		arr[0][0]=1;
		for(int i=1;i<n;++i)
		{
			arr[i][0]=1;
		    arr[i][i]=1;
			for(int j=1;j<i;++j)
			{
				arr[i][j]=arr[i-1][j-1] + arr[i-1][j]; 
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cout<<arr[i][j]<<" "; 
			}
			cout<<endl;
		}
	}
}

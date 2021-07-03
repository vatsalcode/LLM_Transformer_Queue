#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

void chkGCD(int arr[], int n)
{
	int result = arr[0];
	int count=0;
	int ncount=0;
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if(result == 1)
		{
			count++;
		}
		else
		{
			ncount=0;
		}
	}
	if(count>=1)
	{
		cout<<count+1<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		chkGCD(arr,n);
	}
}

#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
long long int hash[N];
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		hash[arr[i]]++;
	}
	int t;
	cin>>t;	
	while(t--)
	{
		int q;
		cin>>q;
		cout<<hash[q]<<endl;
	}
}

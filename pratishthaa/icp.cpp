#include<bits/stdc++.h>
using namespace std;
void checkp(int arr[],int brr[], int m, int n){
	int i=0;
	int j=0;
	int c=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(brr[j] == arr[i])
			{
				break;
			}
		}
		c++;
	}
	cout<<c<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		int arr[a];
		int brr[7]={1,2,3,4,5,6,7};
		for(int j=0;j<a;j++)
		{
			cin>>arr[j];
		}
		int m = sizeof(arr) / sizeof(arr[0]);
        int n = sizeof(brr) / sizeof(brr[0]);
		checkp(arr,brr,m,n);		
	}
	return 0;
}

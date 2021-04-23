#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,temp,l,n,m;
	cin>>i;
	int arr[i];
	for(int n=0;n<i;n++)
	{
		cin>>arr[n];
	}
	sort(arr,arr+i);
	for(int n=0;n<i;n++){
	    cout<<arr[n]<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int minofArray(int a[], int n){
	
	int res = a[0];
	for(int i=1;i<n;i++)
		res= min(res,a[i]);
		return res;
}

int maxofArray(int a[], int n){
	
	int res = a[0];
	for(int i=1;i<n;i++)
		res= max(res,a[i]);
		return res;
	
}


int main(){
	
	int n,a[100];
	cout<<"Enter limit: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		
	cout<<"Minimum of Array: "<<minofArray(a,n)<<"\n";
	cout<<"Maximum of Array: "<<maxofArray(a,n);

	
	return 0;
}

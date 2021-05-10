#include<iostream>
using namespace std;
int main(){
	int i,j;
	cin>>i>>j;
	int arr[i];
	for(int n=0;n<i;n++)
	{
		cin>>arr[n];
	}
	int count=0;int ncount=0;
	for(int n=0;n<i;n++){
	    if(arr[n]%j==0)
	    {
		    count++;
		}
	    else
	        ncount++;
    }
	cout<<count<<endl;
	return 0;
}

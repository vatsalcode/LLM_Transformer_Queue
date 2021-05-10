#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=1,x=0;
		cin>>n;
		while(1){
	        n=n-i;
	        if(n<0){
	            break;
	        }
	        else{
	            x++;
	            i++;
	        }
	    }
	    cout<<x<<endl;
	}
	return 0;
}

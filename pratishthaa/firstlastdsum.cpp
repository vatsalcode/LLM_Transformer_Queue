#include<iostream>
using namespace std;
int main(){
	int t,i,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>i;
		int m;
		m=i%10;
		sum=sum+m;
		while(i>=10)
		{
			
			i=i/10;
		}
	sum=sum+i;
	cout<<sum<<endl;
	}
	return 0;
}

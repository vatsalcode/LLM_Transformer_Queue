#include<iostream>
using namespace std;
int main(){
	int t,i,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>i;
		while(i!=0)
		{
			int m;
			m=i%10;
			sum=sum+m;
			i=i/10;
		}
	cout<<sum<<endl;
	}
	return 0;
}

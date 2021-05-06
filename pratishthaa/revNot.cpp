#include<iostream>
using namespace std;
int main(){
	int t,i,rev;
	cin>>t;
	while(t--)
	{
		rev=0;
		cin>>i;
		while(i!=0)
		{
			int m;
			m=i%10;
			rev=rev*10+m;
			i=i/10;
		}
	cout<<rev<<endl;
	}
	return 0;
}

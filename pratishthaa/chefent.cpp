#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<max(a,b)<<" "<<(a+b)<<endl;
	}
}

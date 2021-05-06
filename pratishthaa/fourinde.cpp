#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if(t%4==0)
	{
		cout<<++t<<endl;
	}
	else
	    cout<<--t<<endl;
	return 0;
}

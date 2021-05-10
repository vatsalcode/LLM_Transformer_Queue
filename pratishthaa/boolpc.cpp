#include<iostream>
using namespace std;
bool isPrime(int N);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		if(isPrime(n))
		{
			cout<<"yes"<<endl;
		}
		else
		    cout<<"no"<<endl;
	}
	return 0;
}
bool isPrime(int N)
{
	int i;
	if(N==1)
	    return false;
	for(i=2;i<N;i++)
	{
		if(N%i==0)
		{
			return false;
		}
    }
	return true;
}

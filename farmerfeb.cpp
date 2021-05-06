#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b;
		c=1;
		while(1)
		{
			if(isPrime(a+b+c)==0){
				break;
			}
			c++;
		}
		cout<<c<<endl;
		
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long int m,n,a,b,c;
		cin>>m>>n;
		a=__gcd(m,n);
		b=__gcd(--m,--n);
		c=__gcd(++m,++n);
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
}

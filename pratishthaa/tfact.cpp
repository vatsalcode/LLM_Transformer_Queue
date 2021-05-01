#include<iostream>
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main(){
	int t,i,f,q;
	cin>>t;
	while(t--)
	{
		cin>>i;
	    cpp_int f=1;
		for(q=1;q<=i;q++)
	    {
	    	f*=q;
	    }
	cout<<f<<endl;
	}
	return 0;
}

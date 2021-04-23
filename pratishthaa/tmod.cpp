#include<iostream>
using namespace std;
int main(){
	int t,i,j,rem;
	cin>>t;
	while(t--)
	{
		cin>>i>>j;
	    rem=i%j;
		cout<<rem<<endl;
    }
	return 0;
}

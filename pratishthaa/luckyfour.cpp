#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int num;
	    cin>>num;
	    int digit= 4,rem,count=0;
	    while(num!=0)
	    {
	        rem = num%10;
	        if(rem == digit)
	            count++;
	        num=num/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

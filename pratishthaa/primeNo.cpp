#include<iostream>
using namespace std;

class Prime
{
	int n , i , x;
	public:
		void set_data()
		{
			cout<<"Enter the number:";
			cin>>n;
		}
		
		void check()
		{
			int flag = 0;
			for(i = 2 ; i < n/2 ; i++)     //  i=1;  while( i < n/2 )
			{
				if(n % i == 0){
				  flag = 1;
				  break;
			    }
			}
			if(n == 1)
			  flag = 0;
			if(flag == 0)
			  cout<<"The number is prime number.";
			else
			  cout<<"The number is not a prime number.";    
		}
	
};

int main()
{
	Prime pr;
	pr.set_data();
	pr.check();
	
	return 0;
}

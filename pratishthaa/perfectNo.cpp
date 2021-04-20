#include<iostream>
using namespace std;

class Perfect
{
	int n , i , s , x , a;
	public:
		void set_data()
		{
			cout<<"Enter the number:";
			cin>>n;
		}
		
		void check()
		{
			x = n;
			a = 1;
			s = 0;
			while(a < n)
			{
				if(n % a == 0)
				{
					s = s + a ;
				}
				a++;
			}
			if(s == x)
			  cout<<"The number is perfect number.";
			else
			  cout<<"The number is not perfect.";  
		}
};

int main()
{
	Perfect p;
	p.set_data();
	p.check();
	
	return 0;
}

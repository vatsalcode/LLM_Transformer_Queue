#include<iostream>
using namespace std;

class Factorial
{
	int f , n, i;
	public:
		void set_data()
		{
			cout<<"Enter the number:";
			cin>>n;
		}
		
		void fac()
		{
			f = 1;
			for(i = 1 ; i <= n ; i++)
			{
				f = f * i;
			}
			cout<<"Factorial of "<<n<<" is = "<<f;
		}
};

int main()
{
	Factorial s;
	s.set_data();
	s.fac();
	
	return 0;
}

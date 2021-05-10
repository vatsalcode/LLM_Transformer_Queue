#include<iostream>
using namespace std;

class Pallindrome
{
	int n , s , r , num;
	public:
		void set_data()
		{
			cout<<"Enter the number:";
			cin>>num;
		}
		
		void check()
		{
			s=0;
			n = num;
			while(n > 0)
			{
				r = n % 10;
				s = s * 10 + r;
				n = n / 10;
			}
			if(s == num)
			   cout<<"The number is pallindrome";
			else
			   cout<<"The number is not pallindrome";   
		}
};

int main()
{
	Pallindrome p;
	p.set_data();
	p.check();
	
	return 0;
}

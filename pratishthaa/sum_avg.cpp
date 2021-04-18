#include<iostream>
using namespace std;

class SumAvg
{
	int n , s , i , c;
	float avg;
	public:
		void set_data()
		{
			cout<<"Enter the value of n:";
			cin>>n;
		}
		
		void calculate()
		{
			s = 0 ; i = 1; avg = 0 ;
			while(i <= n)
			{
				s = s + i;
				i++;
			}
			
			avg = s / n;
			
			cout<<"The sum is : "<<s<<endl;
			cout<<"The average is : "<<avg<<endl;
		}
	
};

int main()
{
	SumAvg sa;
	sa.set_data();
	sa.calculate();
	
	return 0;
}

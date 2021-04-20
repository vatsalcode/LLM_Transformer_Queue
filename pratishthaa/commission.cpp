#include<iostream>
using namespace std;

class Sample
{
	float com , sal ;
	public:
		void set_data()
		{
			cout<<"Enter the sales amount:";
			cin>>sal;
		}
		
		void cal()
		{
			if(sal < 500)
			   com = sal * 0.05;
			else if((sal > 500) && (sal <= 2000))
			     com = sal * 0.1;
				 else if((sal > 2000) && (sal <=5000))
				      com = sal * 0.12;
					  else if(sal > 5000)
					        com = sal * 0.125;
							
			cout<<"Commission = "<<com;				    
		}
	
};

int main()
{
	Sample s;
	s.set_data();
	s.cal();
	
	return 0;
}

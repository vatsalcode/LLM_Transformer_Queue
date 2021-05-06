#include<iostream>
using namespace std;

class LeapYear{
	int  year;
	public:
		void set_data();
		void check();
};

void LeapYear::set_data()
{
	cout<<"Enter the year : ";
	cin>>year;
}

void LeapYear::check()
{
	if((year % 400 == 0) ||((year % 4==0 )&&(year %100 != 0)))
	  cout<<"The "<<year<<" is leap year.";
	else
	   cout<<year<<" is not a leap year.";  
}

int main()
{
	LeapYear l;
	l.set_data();
	l.check();
	
	return 0;
}

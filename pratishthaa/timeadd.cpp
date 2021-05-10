#include<iostream>
using namespace std;

class Time
{
	int hr , min;
	public:
		void set_data(int , int);
		void add(Time , Time);
		void display();
};

void Time::set_data(int x , int y)
{
	cout<<"Enter the hour and minute : ";
	cin>>x>>y;
	hr = x;
	min = y;
}

void Time::add(Time t1 , Time t2)
{
	min = t1.min + t2.min;
	hr = min / 60;
	min = min % 60;
	hr = hr + t1.hr + t2.hr;
}

void Time::display()
{
	cout<<hr<<" hours "<<min<<" minutes"<<endl;
}

int main()
{
	Time t1,t2;
	int ch,x,y;
	do
	{
		cout<<endl<<"1=Insert data\n2=Addition\n3=Display\n4=Exit";
		cout<<endl<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : t1.set_data(x,y);
			         t2.set_data(x,y);
			         break;
			         
			case 2 :  t1.add(t1,t2);
			          cout<<"Addition of two timings is : ";
					  t1.display();
					  break;
					  
			case 3 : t1.display();
			         t2.display();
					 break;
					 
			case 4 : exit(0);
			
			default : cout<<"Enter valid choice.";		           
		}
	}while(ch!=5);
	return 0;
}


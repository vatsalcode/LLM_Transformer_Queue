#include<iostream>
using namespace std;

class Swapping
{
	int a , b;
	public:
	   void set_data(int , int);
	   void display();
	   friend void swap(Swapping &); 
};

void Swapping::set_data(int x , int y)
{
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	a = x;
	b = y;
}

void swap(Swapping &s)
{
	int temp = s.a;
	s.a = s.b;
	s.b= temp;
}

void Swapping::display()
{
	cout<<a<<"\t"<<b;
}

int main()
{
	Swapping s1;
	int x,y;
	s1.set_data(x,y);
	cout<<"Numbers before swapping : ";
	s1.display();
	
	swap(s1);
	
	cout<<endl<<"Numbers after swapping : ";
	
	s1.display();
	
	return 0;
}

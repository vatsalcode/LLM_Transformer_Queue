#include<iostream>
using namespace std;

class Sample
{
	int n;
	
	public:
		void set_data()
		{
			cout<<"Enter the number:";
			cin>>n;
		}
		void number()
		{
		 
			if(n%2 == 0)
			   cout<<endl<<"Number is even";
			else
			   cout<<endl<<"Number is odd";   
		}
};

int main()
{
	Sample s;
	s.set_data();
	s.number();
	
	return 0;
}

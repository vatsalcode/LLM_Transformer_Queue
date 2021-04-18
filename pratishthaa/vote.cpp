#include<iostream>
using namespace std;

class Voting
{
	int age;
	
	public:
		void set_data()
		{
			cout<<"Enter the age:";
			cin>>age;
		}
		
		void eligibility()
		{
			if(age > 18)
			  cout<<"Person is eligible to vote.";
			  
		}
};

int main()
{
	Voting v;
	v.set_data();
	v.eligibility();
	
	return 0;
}

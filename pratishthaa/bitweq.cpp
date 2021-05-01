#include<iostream>
using namespace std;

class Sample
{
	int a,b;
	public:
		void set_data()
		{
			cout<<"Enter the values:";
			cin>>a>>b;
		}
		
		void bitEqui()
		{
			cout<<endl<<((a|b) | (a&b));
		}
};

int main()
{
	Sample s;
	s.set_data();
	s.bitEqui();
	
	return 0;
}

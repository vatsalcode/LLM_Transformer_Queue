#include<iostream>
using namespace std;

class ascii
{
	char ch;
	
	public:
		void get()
		{
			cout<<"Enter the value:";
			cin>>ch;
		}
		void display()
		{
			cout<<"The ASCII value of "<<ch<<" is "<<int(ch)<<endl;
		}
};
int main()
{
	ascii a;
	a.get();
	a.display();
	return 0;
}

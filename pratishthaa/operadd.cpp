#include<iostream>
using namespace std;

class Number
{
	int a,b;
	public:
		Number()
		{
			cout<<"ENTER THE VALUE OF a AND b: ";
			cin>>a>>b;
		}
		
		void display()
		{
			cout<<endl<<a<<"\t"<<b;
		}
		
		void operator+(Number t)
		{
			a=a+t.a;
			b=b+t.b;
		}
};

int main()
{
	Number n1,n2;
	n1.display();
	n2.display();
	
	cout<<endl<<"-------------";
	n1+n2;
	n1.display();
	return 0;
}

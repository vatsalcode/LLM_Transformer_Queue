#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class area_of_triangle
{
    int a, b, c;
	float area , s;
	
	public:
		void data()
		{
			
			cout<<"Enter the sides of triangle"<<endl;
			cin>>a>>b>>c;	
		}
		void cal_area()
		{
			data();
			s = (a+b+c)/2;
	        area = sqrt(s*(s-a)*(s-b)*(s-c));
	        cout<<"Area of triangle:"<<setw(10)<<setprecision(3)<<area<<"msqr"<<endl;
		}
		
};
int main()
{
	area_of_triangle a;
	a.cal_area();
	
	return 0;
}

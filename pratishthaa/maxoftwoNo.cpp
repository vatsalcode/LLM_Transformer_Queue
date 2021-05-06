#include<iostream>
using namespace std;

class Maximum
{
    int a, b , max;
	
	public:
		void set_data()
		{
			cout<<"Enter the value of two numbers:";
			cin>>a>>b;
		}
		
		void find_max()
		{
			if(a > b){
			  max = a;
		    }
			else
			  max = b;
			  
			cout<<"Maximum number = "<<max;    
		}
	   	
}; 

int main()
{
	Maximum m;
	m.set_data();
	m.find_max();
	
	return 0;
}

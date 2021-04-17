#include<iostream>
#include<cmath>
#include<process.h>

using namespace std;
class calculator
{
      int a , b;
      
      public:
      	
      	void get()
      	{
      		cout<<"Enter first number:";
      		cin>>a;
      		
      		cout<<"Enter second number:";
      		cin>>b;
		}
		
		void add()
		{
			get();
			int c;
			c = a + b;
			cout<<"Addition ="<<c<<endl;
			
		}
		
		void sub()
		{
			get();
			int c;
			c = a - b;
			cout<<"Subtraction="<<c<<endl;
		}
		
		void multiply()
		{
			get();
			int c;
			c = a * b;
			cout<<"Multipication="<<c<<endl;
		}
		
		void divide()
		{
			get();
			int c;
			if( b == 0){
				cout<<"Divide by zero give infinty"<<endl;
				return;
			}
			c = a / b;
			cout<<"Division="<<c<<endl;
		}

};

int main()
{
	calculator c1;
	int ch;
	do{
	
	    cout<<"1=Addition"<<endl;
	    cout<<"2=Subtraction"<<endl;
	    cout<<"3=Multiply"<<endl;
	    cout<<"4=Division"<<endl;
	    cout<<"5=Exit"<<endl;
	    cout<<"Enter Your choice:";
	    cin>>ch;
	    
	    switch(ch)
	    {
	    	case 1 :c1.add();
	    	         break;
	    	
			case 2 : c1.sub();
	    		     break;
	    		     
	    	case 3 : c1.multiply();
				     break;
			
			case 4 : c1.divide();
				     break;
				     
			case 5 : exit(0);
			
			default : cout<<"Please enter valid choice"<<endl;
				     
		}
    }while(1);
    
    return 0;
}

#include<iostream>
using namespace std;

class Matrix
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,r,col;
	public:
		void set_data();
		void add_row();
		void add_column();
		void display();
};

void Matrix::set_data()
{
	cout<<"Enter the number of rows and columns of 1st matrix : ";
	cin>>n>>m;
	cout<<"Enter the elements of 1st matrix : ";
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		  cin>>a[i][j];
	}
	
	cout<<endl<<"Enter the number of rows and columns of 2nd matrix : ";
	cin>>r>>col;
	cout<<endl<<"Enter the elements of 2nd matrix : ";
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < col ; j++)
		  cin>>b[i][j];
	}
}

void Matrix::add_row()
{
	for(i= 0 ; i < n ; i++)
	{
		for(j = 0 ; j < r ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	display();
}

void Matrix::add_column()
{
	for(i= 0 ; i < m ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	display();
}

void Matrix::display()
{
	cout<<"1st martix is : "<<endl;
	for(i = 0 ; i < n ; i++)
	{		
	    for(j= 0 ; j < m ; j++)
	    {
	    	cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"2nd martix is : "<<endl;
	for(i = 0 ; i < r ; i++)
	{		
	    for(j= 0 ; j < col ; j++)
	    {
	    	cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	cout<<"Addition of 2 martices are : "<<endl;
	for(i = 0 ; i < r ; i++)
	{		
	    for(j= 0 ; j < col ; j++)
	    {
	    	cout<<"\t"<<c[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	Matrix m;
	int ch;
	do
	{
		cout<<endl<<"\n1=Insert data\n2=Addition row wise\n3=Addition column wise\n4=display\n5=Exit"<<endl;
		cout<<"Enter the choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : m.set_data();
			         break;
			         
			case 2 : m.add_row();
			         break;
					 
			case 3 : m.add_column();
			          break;
					  
			case 4 : m.display();
			         break;
			         
			case 5 : exit(0);
			
			default : cout<<"Enter valid choice.";
			         
		}
	}while(ch!=6);
	return 0;
}

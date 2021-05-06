#include<iostream>
using namespace std;

class Matrix
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,r,col;
	public:
		void set_data();
		void sub_matrix();
		void dispaly();
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

void Matrix::sub_matrix()
{
	for(i= 0 ; i < n ; i++)
	{
		for(j = 0 ; j < r ; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
}

void Matrix::dispaly()
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
	cout<<"Subtraction of 2 martices are : "<<endl;
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
	m.set_data();
	m.sub_matrix();
	m.dispaly();
	
	return 0;
}

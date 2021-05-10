#include<iostream>
using namespace std;

class Transpose
{
	int a[10][10] , b[10][10] , row , col , i , j ;
	public:
		void set_data();
		void tmatrix();
		void display();
};

void Transpose::set_data()
{
	cout<<"Enter the number of rows : ";
	cin>>row;
	cout<<"Enter the number of columns : ";
	cin>>col;
	cout<<"Enter the elements : ";
	cout<<"";
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ;j++)
	    {
	    	cin>>a[i][j];
		}
	}
	cout<<"The matrix is : "<<endl;
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ;j++)
	    {
	    	cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
}


void Transpose::tmatrix()
{
	for(i = 0 ; i< row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
		    b[j][i] = a[i][j];
		}
	}
}

void Transpose::display()
{
	cout<<"The transpose of matrix is : "<<endl;
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ;j++)
	    {
	    	cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	
}

int main()
{
	Transpose t;
	t.set_data();
	t.tmatrix();
	t.display();
	
	return 0;
}

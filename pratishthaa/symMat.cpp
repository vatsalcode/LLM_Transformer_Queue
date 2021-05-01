#include<iostream>
using namespace std;

class Symmetric
{
	int a[10][10] , row , col , i , j , flag;
	public:
		void set_data();
		void smatrix();
		void display();
};

void Symmetric::set_data()
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
}

void Symmetric::smatrix()
{
	flag = 0;
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			if(a[i][j] != a[j][i])
			{
				flag = 1;
				break;
			}
		}
	}
}

void Symmetric::display()
{
	if(flag == 1)
	  cout<<"The  matrix is symmetric matrix. ";
	else
	  cout<<"The  matrix is not a symmetric matrix. " ; 
}

int main()
{
	Symmetric s;
	s.set_data();
	s.smatrix();
	s.display();
	
	return 0;
}

#include<iostream>
using namespace std;

class Diagonal
{
	int a[10][10] , row , col , i , j , flag;
	public:
		void set_data();
		void matrix();
		void display();
};

void Diagonal::set_data()
{
	cout<<"Enter the number of rows : ";
	cin>>row;
	cout<<"Enter the number of columns : ";
	cin>>col;
	cout<<"Enter the elements : ";
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ;j++)
	    {
	    	cin>>a[i][j];
		}
	}
}

void Diagonal::matrix()
{
	flag = 0;
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			if(i != j)
	        {
		       if(a[i][j] == 0)
		       {
			      flag = 1;
			      break;
		       }
	        }
		}
	}
}

void Diagonal::display()
{
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ;j++)
	    {
	    	cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	if(flag == 1)
	  cout<<"The martrix is diagonal matrix.";
	else
	  cout<<"The martrix is not a diagonal matrix.";  

}

int main()
{
	Diagonal d;
	d.set_data();
	d.matrix();
	d.display();
	
	return 0;
}

#include<iostream>
using namespace std;

class Skew
{
	int a[100][100] , i , j , r , c , flag;
	public:
		void set_data();
		void check();
		void display();
};

void Skew::set_data()
{
	cout<<"Enter the number of rows : ";
	cin>>r;
	cout<<"Enter the number of columns : ";
	cin>>c;
	cout<<"Enter the elements : "<<endl;
	cout<<"";
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ;j++)
	    {
	    	cin>>a[i][j];
		}
	}
}

void Skew::check()
{
	flag = 0;
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		{
			if(a[i][j] == (-a[j][i]))
			{
				flag = 1;
				break;
			}
		}
	}
}

void Skew::display()
{
	if(flag == 1)
	  cout<<"The  matrix is  skew symmetric matrix. ";
	else
	  cout<<"The  matrix is not a skew symmetric matrix. " ;
}

int main()
{
	Skew s;
	s.set_data();
	s.check();
	s.display();
	
	return 0;
}

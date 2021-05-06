#include<iostream>
using namespace std;

class Selection_Sort
{
	int a[10] , n , i , j , temp;
	public:
		void set_data()
		{
			cout<<"Enter the size of array : ";
			cin>>n;
			cout<<"The elements are : ";
			for(i = 0 ; i < n ; i++)
			cin>>a[i];
		}
		
		void ssort()
		{
			for(i = 0 ; i < n-1 ; i++)
			{
				for(j = i ; j < n ; j++)
				{
					if(a[i] > a[j])
					{
					   temp = a[i];
					   a[i] = a[j];
					   a[j] = temp;	
					}
				}
			}
		}
		
		void display()
		{
			cout<<"Elements after sorting are : ";
			for(i = 0 ; i < n ; i++)
			  cout<<"\t"<<a[i];
		}
}; 

int main()
{
	Selection_Sort ss;
	ss.set_data();
	ss.ssort();
	ss.display();
	return 0;
}

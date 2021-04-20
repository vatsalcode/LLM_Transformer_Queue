#include<iostream>
using namespace std;

class Binary
{
	int a[100] , n , i , x , mid , lb , ub;
	public:
	    void set_data()
		{
			cout<<"Enter the size of array: ";
			cin>>n;
			cout<<endl<<"Array elements are :";
			for(i = 0 ; i < n ; i++)
			   cin>>a[i];
		}
		
		void bsearch()
		{
			int flag = 0;
			cout<<"Enter the number to be search : ";
			cin>>x;
			lb = 0;
			ub = n - 1;
			while(lb < ub)
			{
				mid = (lb + ub) / 2;
				if(a[mid] == x)
				{
					flag = 1;
					break;
				}
				if(a[mid] > x)
				{
					ub = mid - 1;
				}else if(a[mid] < x)
				{
					lb = mid + 1;
				}
			}
			if(flag == 1)
			   cout<<"Element found.";
			else 
			   cout<<"Element not found.";   
		}
};

int main()
{
	Binary b;
	b.set_data();
	b.bsearch();
	
	return 0;
}

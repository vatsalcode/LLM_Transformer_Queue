#include<iostream>
using namespace std;

class student
{
	float fee;
	char name[50];
	public:
		void setdata()
		{
			cout<<"\n\nRoll No. : ";
			cin>>rollno;
			cout<<"Name : ";
			fflush(stdin);
			cin>>name;
			cout<<"Fee : ";
			cin>>fee;
		}
		
		void display()
		{
			cout<<"\nRoll No. : "<<rollno;
			cout<<"\nName : "<<name;
			cout<<"\nFee : "<<fee;
		}
		int rollno;
		
};

void sort(student s[],int n)
{
	student temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j].rollno>s[j+1].rollno)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}

int main()
{
	student s[100];
	int n;
	cout<<"Enter the number of students : ";
	cin>>n;
	cout<<"Enter the data for the Students\n";
	int i;
	for(i=0;i<n;i++)
	{
		s[i].setdata();
	}
	
	sort(s,n);
		
	
	cout<<"Details of the student in ascending order of their RollNo. : \n";
	for(i=0;i<n;i++)
		s[i].display();
	return 0;
}

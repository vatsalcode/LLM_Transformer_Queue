#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	char name[50] , course[50] ;
	int rno;
	public:
		void set_data();
		void update_course();
		void display();
};

void Student::set_data()
{
	cout<<"Enter the name : ";
	cin>>name;
	cout<<"Enter the roll number : ";
	cin>>rno;
	cout<<"Enter the course : ";
	cin>>course;
}

void Student::update_course()
{
	char c[20];
	cout<<"Enter new course : ";
	cin>>c;
	strcpy(course , c);
}

void Student::display()
{
	cout<<"Student details"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Name\tRollNo\tCourse"<<endl;
	cout<<name<<"\t"<<rno<<"\t"<<course<<endl;
}

int main()
{
	Student s1;
	int ch;
	do
	{
		cout<<endl<<"1=Insert the details. \n2=Update the course. \n3=Display. \n4=Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : s1.set_data();
			         break;
					 
			case 2 : s1.update_course();
			         break;
					 
			case 3 : s1.display();
			         break;
					 
			case 4 : exit(0);
			
			default : cout<<"Enter valid choice..";
			          break;		 		 		  
		}
	}while(ch != 5);
	
	return 0;
}

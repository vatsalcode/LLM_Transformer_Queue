#include<iostream>
using namespace std;

class Student
{
	int RollNo;
	char Name[30];
	float oop,se,daa,cv;
	public:
		float per;
		void set_data();
		void cal_per();
		void display();	
};
void Student::set_data()
{
	cout<<"Enter student Roll no:";
	cin>>RollNo;
	fflush(stdin);
	cout<<"Enter student name:";
	cin.getline(Name,30);
	cout<<"Enter marks obtained in OOP:";
	cin>>oop;
	cout<<"Enter marks obtained in SE:";
	cin>>se;
	cout<<"Enter marks obtained in DAA:";
	cin>>daa;
	cout<<"Enter marks obtained in CV:";
	cin>>cv;
}

void Student::cal_per()
{
	per=(oop+se+daa+cv)*0.25;
}

void Student::display()
{
	cout<<endl<<RollNo<<"\t"<<Name<<"\t"<<oop<<"\t"<<se<<"\t"<<daa<<"\t"<<cv<<"\t"<<per;
}

int main()
{
	int no,i;
	Student s[100];
	cout<<"Enter the number of students:";
	cin>>no;
	cout<<"Enter the student details one by one:"<<endl;
	for(i=0;i<no;i++)
	{
		s[i].set_data();
		s[i].cal_per();
		cout<<"---------------------------"<<endl;
	}
	cout<<endl<<"Roll No"<<"\t"<<"Name"<<"\t"<<"OOP"<<"\t"<<"SE"<<"\t"<<"DAA"<<"\t"<<"CV"<<"\t"<<"Percentage";
	for(i=0;i<no;i++)
	{
		s[i].display();
	}
	float maxper=s[0].per;
	int t;
	for(i=1;i<no;i++)
	{
		if(maxper<s[i].per)
		{
			maxper=s[i].per;
			t=i;
		}
	}
	cout<<endl<<"TOPPER OF THE CLASS:";
	cout<<endl<<"Roll No"<<"\t"<<"Name"<<"\t"<<"OOP"<<"\t"<<"SE"<<"\t"<<"DAA"<<"\t"<<"CV"<<"\t"<<"Percentage";
	s[t].display();
	return 0;
}

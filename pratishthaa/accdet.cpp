#include<iostream>
using namespace std;

class Account
{
	int acno;
	long long int cont_no;
	char name[30],address[30];
	float amount;
	public:
		void set_data();
		void display();
		void deposit();
		void withdraw();
};

void Account::set_data()
{
	cout<<"Enter the account number : ";
	cin>>acno;
	cout<<"Enter the account holder name : ";
	fflush(stdin);
	cin.getline(name,30);
	cout<<"Enter the address : ";
	fflush(stdin);
	cin.getline(address,30);
	cout<<"Enter the contact number : ";
	cin>>cont_no;
	cout<<"Enter the amount : ";
	cin>>amount;
}

void Account::display()
{
	cout<<"-------------Account Details---------------"<<endl<<endl;
	cout<<"AcNo.\tName\tAddress\tContactNo.\tAmount"<<endl;
	cout<<endl<<acno<<"\t"<<name<<"\t"<<address<<"\t"<<cont_no<<"\t"<<amount<<endl;
}

void Account::deposit()
{
	int d;
	cout<<"Enter the amount to deposit : ";
	cin>>d;
	
	amount = amount + d;
	display();
	cout<<"Amount Deposited successfully.."<<endl;
}

void Account::withdraw()
{
	int w;
	cout<<"Enter the amount to withdraw : ";
	cin>>w;
	if(w > amount)
	{
		cout<<"The withdraw amount limit is execeeded.";
		return;
	}
	amount =  amount - w;
	display();
	cout<<"Amount Withdraw successfully.."<<endl;
}

int main()
{
	Account a;
	int ch;
	do
	{
		cout<<endl<<"1=Insert details\n2=Deposit amount\n3=Withdraw amount\n4=Display\n5=Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : a.set_data();
			         break;
			         
			case 2 : a.deposit();
			         break;
					 
			case 3 : a.withdraw();
			         break;
					 
			case 4 : a.display();
			         break;
					 
			case 5 : exit(0);
			
			default : cout<<"Enter valid choice."; 		 		 		          
		}
	}while(ch!=6);
	
	return 0;
}

#include<iostream>
using namespace std;
int calculator(int num1,int num2,int num3);
int main()
{
    //int num1,num2,num3,choice;
    int a,b,c,choice;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"************************"<<endl;
    cout<<"****Make your choice****"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"************************"<<endl;

    choice=calculator(a,b,c);
    return 0;
}
int calculator(int num1,int num2,int num3)
{

    int choice;
    cin>>choice;
    switch(choice)
    {

        case 1: cout<<"you have selected Addition"<<endl;
                num3=num1+num2;
                cout<<"Addition of two numbers is "<<num3<<endl;
                break;

        case 2: cout<<"you have selected Subtraction"<<endl;
                num3=num1-num2;
                cout<<"Subtraction of two numbers is "<<num3<<endl;
                break;

        case 3: cout<<"you have selected Multiplication"<<endl;
                num3=num1*num2;
                cout<<"Multiplication of two numbers is "<<num3<<endl;
                break;

        case 4: cout<<"You have selected Division"<<endl;
                num3=num1/num2;
                cout<<"Division of two numbers is "<<num3<<endl;
                break;

        default: cout<<"You have entered wrong choice"<<endl;
                    break;
    }
}

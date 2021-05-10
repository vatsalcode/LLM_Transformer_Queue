#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
int a;
int b;
cout<<"Enter the first number";
cin>>a;
cout<<"Enter the second number";
cin>>b;
cout<<"The number stored before swapping the position A is \n"<<a;
cout<<"The number stored before swapping the position B is \n"<<b;
int temp;
temp=a;
a=b;
b=temp;
cout<<"The number stored after swapping the position A is \n"<<a;
cout<<"The number stored after swapping the position B is \n"<<b;
return 0;
}

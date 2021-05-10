#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
//Program to print the Rectangle Pattern
int r,c,i,j;
cout<<"Enter the number of rows";
cin>>r;
cout<<"Enter the number of columns";
cin>>c;
for(i=0;i<r;i++)
{
{
for(j=0;j<c;j++)
cout<<"*";
}
cout<<endl;
}
getch();
return 0;
}

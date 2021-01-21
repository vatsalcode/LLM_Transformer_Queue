#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i;
int arr[10];
for(i=0;i<10;i++)
{
cout<<"Enter the number : \n";
cin>>arr[i];
}
for(i=0;i<10;i++)
{
cout<<"\n"<<"Number for Position["<<i+1<<"] is"<<arr[i];
}


getch();
}

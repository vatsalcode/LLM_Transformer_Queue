#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
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
return 0;
}

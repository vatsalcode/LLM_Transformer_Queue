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
int a;
cout<<"What number you wanna view? \n";
cin>>a;
for(i=0;i<10;i++)
{
if(arr[i]==a)
break;
}
cout<<"The requested number is at position \n"<<i;
return 0;
};

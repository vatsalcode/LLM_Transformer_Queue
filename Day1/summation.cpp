#include <iostream>
#include<conio.h>
using namespace std;

int main()
{

int temp=0;
int n;
cout<<"Enter the number till you want the summation of :";
cin>>n;

for(int i=1;i<=n;i++)
{
temp=temp+i;
}
cout<<"The summation of numbers is till"<<n<<"is"<<temp;
getch();
    return 0;
}

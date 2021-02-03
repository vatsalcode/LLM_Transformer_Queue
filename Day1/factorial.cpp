#include <iostream>
#include<conio.h>
using namespace std;

int main()
{

int temp=1;
int n;
cout<<"Enter the number you want factorial of :";
cin>>n;

for(int i=1;i<=n;i++)
{
temp=temp*i;
}
cout<<"The factorial of"<<n<<"is"<<temp;
getch();
    return 0;
}

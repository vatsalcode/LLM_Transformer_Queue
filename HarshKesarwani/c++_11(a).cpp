#include<iostream>

using namespace std;

int sum(int a,int b)
{
    return a+b;
} 

int sum(int a, int b, int c)
{
    return a+b+c;
}

int volume(double r, int h)
{
    return (3.14*r*r*h);
}

int volume(int a)
{
    return (a*a*a);
}

int main()
{   int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<"sum of 2 numbers"<<sum(n1,n2); 
    cout<<"sum of 3 numbers "<<sum(n1,n2,n3);  
    cout<<"volume1 "<<volume(n1,n2); 
    cout<<"volume2 "<<volume(n1); 
    return 0;
}  

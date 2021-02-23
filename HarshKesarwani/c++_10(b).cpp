#include<iostream>

using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
} 

int main()
{   int n;
    cout<<"enter a number"; 
    cin>>n;
    cout<<"the term in fibonacci sequence at position "<<n<<"is"<<fib(n)<<endl;  
    return 0;
} 

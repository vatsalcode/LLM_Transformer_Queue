1) Learned about recursion

#include<iostream>

using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{   int n;
    cout<<"enter a number"; 
    cin>>n;
    cout<<"the factorial is"<<factorial(n)<<endl;
    return 0;
}  

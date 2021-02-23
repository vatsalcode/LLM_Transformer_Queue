#include<iostream>

using namespace std;

void swapReferenceVar(int &a, int &b)   //call by reference using using c++ reference variable
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int x=3,y=5;
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    swapReferenceVar(x,y); //this will swap a and b using reference variables
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    return 0;
}

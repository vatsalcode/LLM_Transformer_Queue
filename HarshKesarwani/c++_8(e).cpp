#include<iostream>

using namespace std;

int & swapReferenceVar(int &a, int &b)   
{
    int t=a;
    a=b;
    b=t;
    return a;
}
int main()
{
    int x=3,y=5;
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    swapReferenceVar(x,y)=766; 
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    return 0;

}

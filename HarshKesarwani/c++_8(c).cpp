#include<iostream>

using namespace std;
void swap(int a, int b)   //this will not swap
{
    int t=a;
    a=b;
    b=t;
}

void swapPointer(int* a, int* b)   //call by reference using using pointers// this will swap
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int x=3,y=5;
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    return 0;	

}

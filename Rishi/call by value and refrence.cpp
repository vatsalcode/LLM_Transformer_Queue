#include<iostream>
using namespace std;


//This will not swap a and b
//This is called called by value

void swap(int x, int y){     // temp  a   b
  int temp= x;                //  4    4   5
  x=y;                       //  4    5   5
  y=temp;                    //  4    5   4
}
//we have to use swap pointers to swap them

//Call by refrence using pointers
void swapPointer(int* x, int* y){      // temp  a   b
  int temp=*x;                         //  4    4   5
  *x=*y;                               //  4    5   5
  *y=temp;                             //  4    5   4
}

//Call by refrence using c++ refrence variables 
void swapRefrencevar(int &x, int &y){       // temp  a   b
  int temp=x;                               //  4    4   5
  x=y;                                      //  4    5   5
  y=temp;                                   //  4    5   4
}

int main(){
    int a=4,b=5;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;

//swap(a,b); This will not swap and b

//swapPointer(&a,&b); This will swap a and b using pointers

swapRefrencevar(a,b);   //This will swap a and b

cout<<"The value of a is : "<<a<<endl;
cout<<"The value of b is : "<<b<<endl;

    return 0;
}

#include<iostream>
using namespace std;
//pointers
int main(){
          int a=3;
          int* b;
          b=&a;
          // &---> Adress of operator
          cout<<"The adress of a is "<<&a<<endl;   
           cout<<"The adress of b is "<<b<<endl;                     

          //*---> (value at) DErefrence operator

           cout<<"The value  of b is "<<*b<<endl;   
           //pointer to pointer
int** c=&b;
  cout<<"The adress of b is "<<&b<<endl;  
    cout<<"The adress of b is "<<c<<endl;  
  cout<<"The value at adress of a is "<<*c<<endl;  
  cout<<"The value at adress value at  c is "<<**c<<endl;  

    return 0;
}

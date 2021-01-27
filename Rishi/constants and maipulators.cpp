#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    // costants in C++
const int a=45;
cout<<"The value of a is:"<<a;
cout<<"The value of a is:"<<a<<endl;

// Manipulators in C++

int b=36,c=48,d=54444;
cout<<"The value of d without setw is :"<<d<<endl;
cout<<"The value of b without setw is :"<<b<<endl;
cout<<"The value of c without setw is :"<<c<<endl;

cout<<"The value of d is :"<<setw(5)<<d<<endl;
cout<<"The value of b is :"<<setw(5)<<b<<endl;
cout<<"The value of c is :"<<setw(5)<<c<<endl;



    return 0;
}

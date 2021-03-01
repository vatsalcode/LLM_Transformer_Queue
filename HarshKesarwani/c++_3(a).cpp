1) Learned about header files
2) Learned about operators and its precedence
3) Learned about reference variable
4) Learned about typecasting
5) Learned about manipulators
6) Learned about if-else
7)Learned about constant

#include<iostream>
using namespace std;
int c = 45;
int main(){
    int c=42;
    cout<<c<<endl; //will print local variable
    cout<<::c; //will print global variable
    return 0;

}

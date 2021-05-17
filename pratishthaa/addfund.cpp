#include <iostream>
#include <cmath>
using namespace std;

int sum(int,int);

int main(){
   int x, y;
   cout<<"enter first number: ";
   cin>> x;

   cout<<"enter second number: ";
   cin>>y;

   cout<<"Sum of these two :"<<sum(x,y);
   return 0;
}
int sum(int a, int b) {
   int c = a+b;
   return c;
}

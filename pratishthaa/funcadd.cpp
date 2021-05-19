#include <iostream>
using namespace std;
int sum(int,int);
int main(){
   cout<<sum(12,200);
   return 0;
}
int sum(int num1, int num2){
   int num3 = num1+num2;
   return num3;
}

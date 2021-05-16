#include <iostream>
using namespace std;
int main(){
   int num; cout<<"Enter a number: "; cin>>num;
   if (num % 2==0){
      goto print;
   }
   else {
      cout<<"Odd Number";
   }

   print:
   cout<<"Even Number";
   return 0;
}

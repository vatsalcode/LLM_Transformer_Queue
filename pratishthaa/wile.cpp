#include <iostream>
using namespace std;
int main(){
   int num=2;
   switch (num) {
      case 1: cout<<"Case 1 "<<endl;
      break;
      case 2: cout<<"Case 2 "<<endl;
      break;
      case 3: cout<<"Case 3 "<<endl;
      break;
      default: cout<<"Default "<<endl;
   }
   cout<<"Hey, I'm out of the switch case";
   return 0;
}

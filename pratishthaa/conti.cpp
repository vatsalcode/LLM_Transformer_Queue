#include <iostream>
using namespace std;
int main(){
   int j=4;
   do {
      if (j==7) {
         j++;
         continue;
      }
      cout<<"j is: "<<j<<endl;
      j++;
   }while(j<10);
   return 0;
}

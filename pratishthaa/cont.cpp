#include <iostream>
using namespace std;
int main(){
   int j=6;
   while (j >=0) {
      if (j==4) {
         j--;
         continue;
      }
      cout<<"Value of j: "<<j<<endl;
      j--;
   }
   return 0;
}

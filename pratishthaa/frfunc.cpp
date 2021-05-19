#include <iostream>
using namespace std;
class XYZ {
private:
   char ch='A';
   int num = 11;
public:
   friend class ABC;
};
class ABC {
public:
   void disp(XYZ obj){
      cout<<obj.ch<<endl;
      cout<<obj.num<<endl;
   }
};
int main() {
   ABC obj;
   XYZ obj2;
   obj.disp(obj2);
   return 0;
}

#include <iostream>
using namespace std;
class XYZ {
private:
   int num=100;
   char ch='Z';
public:
   friend void disp(XYZ obj);
};

void disp(XYZ obj){
   cout<<obj.num<<endl; 
   cout<<obj.ch<<endl;
}
int main() {
   XYZ obj;
   disp(obj);
   return 0;
}

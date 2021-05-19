#include <iostream>
using namespace std;
class Student {
public:
   int stuId;
   int stuAge;
   string stuName;
   
   Student input(int n, int a, string s){
      Student obj;
      obj.stuId = n;
      obj.stuAge = a;
      obj.stuName = s;
      return obj;
   }
   
   void disp(Student obj){
      cout<<"Name: "<<obj.stuName<<endl;
      cout<<"Id: "<<obj.stuId<<endl;
      cout<<"Age: "<<obj.stuAge<<endl;
   }
};
int main() {
   Student s;
   s = s.input(1001, 29, "Negan");
   s.disp(s);
   return 0;
}

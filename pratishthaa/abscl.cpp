#include<iostream>
using namespace std;
class Animal{
public:
   
   virtual void sound() = 0;

   
   void sleeping() {
      cout<<"Sleeping";
   }
};
class Dog: public Animal{
public:
   void sound() {
      cout<<"Woof"<<endl;
   }
};
int main(){
   Dog obj;
   obj.sound();
   obj.sleeping();
   return 0;
}

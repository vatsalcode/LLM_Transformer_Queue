#include<iostream>
using namespace std;

class Animal{
public:
   virtual void animalSound(){
      cout<<"This is a generic Function";
   }
};

class Dog : public Animal{
public:
   void animalSound(){ 
      cout<<"Woof";
   }
};
int main(){
   Animal *obj;
   obj = new Dog();
   obj->animalSound();
   return 0;
}

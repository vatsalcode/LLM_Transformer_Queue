#include<iostream>
using namespace std;
class employee{
    int count;
    int id;
public:
void setdata(void){
    cout<<"Enter The id"<<endl;
cin>>id;
}
void getdata(void){
    cout<<"The id of this Employee is "<<id<<endl;
}
};
int main(){
    employee harry;
  //harry.id           cannot do this becuase they are private variables.
  //harry.count             cannot do this becuase they are private variables.
harry.setdata();
harry.getdata();
    return 0;
}

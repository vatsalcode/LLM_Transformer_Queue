#include<iostream>
using namespace std;
class employee{
    static int count;
    int id;
public:
void setdata(void){
    cout<<"Enter The id"<<endl;
cin>>id;
count++;
}
void getdata(void){
    cout<<"The id of this Employee is "<<id<<" and  this is employee number "<<count<<endl;
}
};

int employee::count;   //default value is zero
int main(){
    employee harry,rohan,lovish;
  //harry.id           cannot do this becuase they are private variables.
  //harry.count             cannot do this becuase they are private variables.
harry.setdata();
harry.getdata();

rohan.setdata();
rohan.getdata();

lovish.setdata();
lovish.getdata();
    return 0;
}

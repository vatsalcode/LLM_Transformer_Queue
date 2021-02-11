#include<iostream>
using namespace std;
class y;
class x{
int data;
public:
friend void add(x,y);
void setvalue(int value){
    data=value;
}
void printvalue(){
    cout<<"The value of data o1 is "<<data<<endl;
}
};
class y{
    int num;
    public:
    friend void add(x,y);
    void setvalue(int value){
        num = value; 
    }
    void printnumber(){
     cout<<"The value of data o2 is "<<num<<endl;
     }
};
void add(x o1 ,y o2){
    cout<<"Summing datas of o1 and o2 object gives me as "<<o1.data + o2.num <<endl;
}

int main(){
    x a;
    a.setvalue(3);
    a.printvalue();

    y b;
    b.setvalue(5);
    b.printnumber();
    
    add(a,b);
    return 0;
}

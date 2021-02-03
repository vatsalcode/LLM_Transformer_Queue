
# include<iostream>
using namespace std;


class Employee
{
    private:
          int a,b,c;      //These are the things which are private which we dont want a user to acess from 
          //outside like how buch bonus the employee will get or what is his salary 
        
    public:int d,e;
    //These are the things which all public can access like what are working hrs of emloyee o by which car he comes.
    void SetData(int a1, int b1, int c1);//Decleration
void getData(){
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
cout<<"The value of d is "<<d<<endl;            
cout<<"The value of e is "<<e<<endl;             
}
 };

 void Employee :: SetData(int a1,int b1,int c1){
     a=a1+1;
     b=b1+1;
     c=c1+1;
 }
int main(){
     Employee harry;
     //harry.a=134;  If I specify a as this it will show me a error because it is a private variable.
     harry.d=55;//This is public variable so we have to specify its value like this.
     harry.e=44;//This is public variable so we have to specify its value like this.
     harry.SetData(1,2,4);
     harry.getData();//This get data will print all the values as we set in it earlier.
    return 0;
}

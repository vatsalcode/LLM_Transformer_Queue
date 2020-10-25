#include <iostream>
using namespace std;
class country
{
   public:
   virtual void getdata() = 0;
   virtual void display() = 0;
}; 

class state:public country
{
 public:
 char a[20];
    int b,c;
    char d[20];
    int e,f;
 void getdata()
    {
     cin>>a>>b>>c>>d>>e>>f;
    }
    void display()
    {
     cout<<"Country Name "<<a;
        cout<<endl<<"Country Polio% "<<b;
        cout<<endl<<"Country Litteracy%"<<c;
        cout<<endl<<"The Measure of Interdependency "<<(float)b/c;
        cout<<endl<<"State Name "<<d;
        cout<<endl<<"%Age of Polio of State "<<e;
        cout<<endl<<"%Age of Literacy of State "<<f;
        cout<<endl<<"The Measure of Interdependency "<<(float)e/f;
    }
};
int main() {
 state s;
   s.getdata();
   s.display();
 return 0;
}

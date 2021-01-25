#include<iostream>
using namespace std;

   typedef struct employee
    {
        int eId;
        char favchar;
        float salary;
    } ep;
int main(){
    
    ep harry;
    ep shubham;
    ep rohan;
    harry.eId =1;
    harry.favchar='c';
    harry.salary=120000000;
    cout<<harry.salary<<endl;
    cout<<harry.favchar<<endl;

    return 0;
}

#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    union money m;
    m.rice=34;
    m.car='j';
cout<<m.car;
//if we print value of rice it will give garbage value as union will work for better me ory management 
    return 0;
}

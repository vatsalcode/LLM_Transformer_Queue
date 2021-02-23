#include<iostream>

using namespace std;

typedef struct employee          //typedef
{
    int eId;
    char fav;
    float salary;
} ep;
int main()
{
    ep harsh;      
    //or          
    struct employee abc;
    harsh.eId=1;
    harsh.fav='h';
    harsh.salarry=99999999999;
    cout<<harsh.eid;
    cout<<harsh.salary;
    cout<<harsh.fav;
    
   

return 0;

}

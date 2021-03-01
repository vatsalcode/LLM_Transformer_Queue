1) Learned about structures
2) Learned about unions
3) Learned about enums

#include<iostream>

using namespace std;

struct employee
{
    int eId;
    char fav;
    float salary;
};
int main()
{
    struct employee harsh;
    harsh.eId=1;
    harsh.fav='h';
    harsh.salarry=99999999999;
    cout<<harsh.eid;
    cout<<harsh.salary;
    cout<<harsh.fav;
    
   

return 0;

}

#include<iostream>
using namespace std;
// break
int main(){
int a;
for ( a = 0; a < 10; a++)
{
    cout<<a<<endl;
    if(a==4){
        break;
    }
}
// opposite case
for(int b=0;b<5;b++)
{
    if(b==2){
        break;
    }
    cout<<b<<endl;
}
    
    return 0;
}

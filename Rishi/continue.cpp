#include<iostream>
using namespace std;
// contine
int main(){
    for(int i=0 ;i<40; i++){
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

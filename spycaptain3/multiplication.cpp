#include<iostream>
using namespace std;

int main(){

    int i, g;
    cout<< "Type the number for multiplication:   "<<endl;
    cin>> i;
    for(g=1 ; g <= 11 ; g++){
        int s=i*g;
        cout<<s <<endl;

    }
    return 0;
}

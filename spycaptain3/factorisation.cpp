#include<iostream>
 using namespace std;

int main(){
    int num1, num2=1;

    cout<< "Type the number for factorisation \n";
    cin>> num1;

    for(int i= num1 ; i>=1 ; i--)  
    { 
        num2= num2*i;
    }
    
    cout<< num2;

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int marks[] = {45 ,55,66,77,88,99};
    //using for loop
    for (int i =0 ; i<5; i++ )
    cout<<"The value of marks "<<i<< " is " <<marks[i]<<endl;
    
//using while loop
int b=0;
while(b<5){

        cout<<"The value of marks "<<b<< " is " <<marks[b]<<endl;
        b++;
    
}

// Using do while loop
int c=0;
do{
        cout<<"The value of marks "<<c<< " is " <<marks[c]<<endl;
        c++;
    
}while(c<5);
    
    return 0;
}

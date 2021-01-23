#include<iostream>

using namespace std;

int main(){
    int age ;
    cout<<"Tell me your age"<<endl;
    cin>>age;
if ((age<18) && (age>0))
{
    cout<<"You cannot come to the party";
}

    else if (age==18){
        cout<<"You are a kid and you will get a kid pass for party";
    }

       else if (age<0)
       {
           cout<<"You are not born yet"<<endl;
       }
       
    
    else
    {
        int adress,Phone;
        cout<<"You can come to party"<<endl;
        cout<<"Enter yor adress :"<<endl;
        cin>>adress;
        cout<<"Enter your phone number"<<endl;
        cin>>Phone;
        cout<<"You have registered successfully for party";
        
    }
    return  0; 
}

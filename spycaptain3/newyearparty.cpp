#include <iostream>
using namespace std;

int main(){
    int age , num1 , num2 ;
    

cout<<"New year PARTY 2021"<<endl;
cout<<" Tell me your age "<<endl;
cin>> age;
 if(( age<18) && ( age>0 )){
     cout<<" you are a kid"<<endl;
     cout<<" Happy New year \n";
 }

else if (age==18){
    cout<<" THis is for 18+ XD \n";
    cout<<" Happy New year..."<<endl;
}

else if ((age>18) && (age<55)){
    cout<<"you can Enjoy DUDE.."<<endl;
    cout<<endl;
    cout<<" Select gender \n";
    cout<<" For Male type (1) or For Female type (0) : "<<endl;
    cin>> num1;
    if (num1==1){
        cout<<" Hii Dude.... Wellcomeeee to our PARTY...\n";
        cout<<" choose your drink \n";
        cout<<" For bear type (1) or For wisky type (2) or for Rum type (3)\n";
        cin>> num2;
        if (( num2>0) && (num2<4)){
        cout<<" just wait for your drink and ENJOY...\n";
        }
        else {
            cout<<" ENJOY MILK SHAKE Bro.."<<endl;
        }

    }
    else if (num1==0){
        cout<<"Hello MaM you are not allowed for our party"<<endl;
        cout<<" SORRY....\n";
    }
    else {
        cout<<" Sorry, Go back....";
    }
}

else if (age>55){
    cout<<" Sorry, you are senior citizen"<<endl;
    cout<<" HAPPY New year..\n";
}
 
else {
    cout<<" you are not borned yet. "<<endl;
}

cout<< "\n Thank you so much for your interest and also for your Time.";

return 0;
}

#include<iostream>

using namespace std;

float  moneyReceived(int money , float factor=1.04)  //default argument
{
    return money*factor;
}

int main()
{
    int money=1000;
    //cin>>money;
    cout<<"your money is "<<money<<"you will receive "<<moneyReceived(money)<<"after one year"<<endl;
    cout<<"for VIP : your money is "<<money<<"you will receive "<<moneyReceived(money, 1.1)<<"after one year"<<endl;
    return 0;
}  

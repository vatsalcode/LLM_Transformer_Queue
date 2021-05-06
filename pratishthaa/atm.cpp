#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	std::cout<<std::setprecision(2)<<std::fixed;
    int x;//withdrawn amount
	float y;//bank balance
	cin>>x;
	cin>>y;
	if(0<x<=2000&&0<y<=2000)
	{
	    if(x%5==0&&x<(y-0.50))
	       {
	  	    y=y-x-0.50;
	  	    cout<<y;
	       }
	    else
	        cout<<y;
	}
	return 0;
}

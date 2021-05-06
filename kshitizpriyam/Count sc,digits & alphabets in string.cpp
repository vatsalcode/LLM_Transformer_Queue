#include<iostream>
#include<cstring>

#define c_size 100
using namespace std;

int main(){
	
	char c[c_size];
	cout<<"Enter a string: ";
	cin>>c;
	int cnt1,cnt2,cnt3;
	cnt1=0,cnt2=0,cnt3=0;
	
	int strsize= strlen(c);
	
	for(int i=0; i<strsize;i++){
		
		if((c[i]>=65 && c[i]<=90) || (c[i]>=97 && c[i]<=122)){
			cnt1++;
		}
		
		else if(c[i]>=48 && c[i]<=57){
			cnt2++;
		}
		
		else{
			cnt3++;            //Special Characters (32–47 / 58–64 / 91–96 / 123–126): Special characters include all printable characters that are neither letters nor numbers.
		}
	}
	
	cout<<"No. of characters in the given string: "<<cnt1<<"\n";
	cout<<"No. of digits in the given string: "<<cnt2<<"\n";
	cout<<"No. of special characters in the given string: "<<cnt3<<"\n";
	
	return 0;
}

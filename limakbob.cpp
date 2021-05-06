#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int suma=0,sumb=0;
	    int k=1;
	    while(1){
	        if(k%2!=0){
	            if(suma+k<=a){
	                suma+=k;
	            }
	            else{
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else{
	            if(sumb+k<=b){
	                sumb+=k;
	            }
	            else{
	                cout<<"Limak"<<endl;
	                break;
	            }
	            
	        }
	        k++;
	        
	    }
	    
	}
	return 0;
}

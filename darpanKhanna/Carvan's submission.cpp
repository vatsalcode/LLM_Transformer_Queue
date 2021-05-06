#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int cars;
	    int first_speed;
	    cin>>cars;
	    int count=1;
	    cin>>first_speed;
	    while(--cars){
	        int speed;
	        cin>>speed;
	        if(speed<first_speed){
	            first_speed = speed;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

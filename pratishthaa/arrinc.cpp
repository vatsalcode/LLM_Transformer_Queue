#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N];
void increment(){
	a[0]=++a[0];
}
int main(){
	int t;
	cin>>t;
	while(t--){	
		a[0]=5;
		cout<<a[0]<<endl;
		increment();
		cout<<a[0]<<endl;
	}
}

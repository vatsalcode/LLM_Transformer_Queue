#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		string b;
		cin>>a;
		for(int i=a.size()-1;i>=0;i--)
		{
			b.push_back(a[i]);
		}
		cout<<b<<endl;
	}
}

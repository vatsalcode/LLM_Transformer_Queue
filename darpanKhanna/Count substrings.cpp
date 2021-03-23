#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t;
  cin>>t;
  while(t--){
   long long int n; cin>>n;
   string s; cin>>s;
   long long int count_1=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1'){
        count_1++;
    }
   }
   cout<<count_1*(count_1+1)/2<<endl;
  }
}

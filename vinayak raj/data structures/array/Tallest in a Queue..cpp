#include <bits/stdc++.h>


using namespace std;
int main(){

   int n;cin>>n;
    int l,c=0;
   int x[n];


   for(int i = 0; i < n; i++) {

      cin>>i[x];
   }

   l = x[0];
   for(int i =1;i < n; i++) {

      if(l < i[x])
         l = i[x];

   }
    for(int i=0;i<n;i++)
    {
         if(i[x]==l)
           c++;
    }
   cout<<c;
   return 0;
}

#include<iostream>
using namespace std;
int main() {
   int n, a;
   cout<<"\nEnter the no of Disks: ";
   cin>>n;
   for (a = 1; a < (1 << n); a++) {
      cout<<"\nDisk Move from Peg "<<(a&a-1)%3 <<" to Peg "<<((a|a-1)+1)%3;
   }
   cout<<"\n";
}

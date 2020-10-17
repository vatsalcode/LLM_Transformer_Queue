//you are given a list of n-1 integers and these integerss are in the range of 1 to n.
//there are no duplicates  in the list .
//one of the integers is missing int the list .
//write an efficient code to find the missing integer
 #include<bits/stdc++.h>

 using namespace std;

 void findmissing(int a[],int n)
 {
     for(int i=1;i<n+1;i++)
     {
         if(i!=a[i-1])
         {
             cout<<i;
             break;
         }
     }
 }

 int main()
 {
     int n;cin>>n;
     int a[n];
     //int n=sizeof(a) / sizeof(a[0]);
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     findmissing(a,n);

     return 0;
 }

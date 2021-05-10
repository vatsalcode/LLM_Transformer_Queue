#include<iostream>

using namespace std;
int main()
{
int n;
int a[100];
int sum=0;
cout<<"Enter the length of the array";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter the Array";
cin>>a[i];
sum=sum+a[i];
}
cout<<"Sum of the numbers"<<sum;

}


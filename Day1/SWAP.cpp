#include<iostream>

#include<stdio.h>
using namespace std;
int arr[100];
int myfunction(int a,int end)
{
for(a=0;a<end;)
{
int temp=arr[a];
arr[a]=arr[end-1];
arr[end-1]=temp;
a++;
end--;
}
return 0;
}
int main()
{
int i;
int n;
cout<<"Enter the length of the array \n";
cin>>n;
cout<<"Enter the numbers \n";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"The number stored before swapping the array are \n";
for(i=0;i<n;i++)
{
cout<<arr[i];
}
myfunction(i,n);
cout<<"The number stored after swapping the array is \n";

for(i=0;i<n;i++)
{
cout<<arr[i];
}
getch();
return 0;
}

//Given an array of integers and a positive integer k , determine the number of(i,j)  pairs where i<j  and  arr[i]+arr[j]  is divisible by k.
#include<iostream>
using namespace std;



int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((arr[i]+arr[j])%k==0)
            {
                count++;
            }
            
        }
        
    }
    
cout<<count;
    
    return 0;
}

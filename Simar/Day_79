#include<bits/stdc++.h> 

using namespace std; 
  
// To do two way sort. First sort even numbers in 
// ascending order, then odd numbers in descending 
// order. 
void twoWaySort(int arr[], int n) 
{ 
    // Current indexes from left and right 
    int l = 0, r = n-1; 
  
    // Count of odd numbers 
    int k = 0; 
  
    while (l < r) 
    { 
        // Find first odd number from left side. 
        while (arr[l]%2 != 0) 
        { 
            l++; 
            k++; 
        } 
  
        // Find first even number from right side. 
        while (arr[r]%2 == 0  && l<r) 
            r--; 
  
        // Swap odd number present on left and even 
        // number right. 
        if (l < r) 
            swap(arr[l], arr[r]); 
    } 
  
    // Sort odd number in descending order 
    sort(arr, arr+k, greater<int>()); 
  
    // Sort even number in ascending order 
    sort(arr+k, arr+n); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 3, 2, 7, 5, 4}; 
    int n = sizeof(arr)/sizeof(int); 
    twoWaySort(arr, n); 
    for (int i=0; i<n; i++) 
     cout << arr[i] << " "; 
    return 0; 
}

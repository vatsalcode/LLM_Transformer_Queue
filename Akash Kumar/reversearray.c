#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */

int d, b[100];
    
    for (i = n - 1, d = 0; i >= 0; i--, d++)
    b[d] = arr[i];

  // Copying reversed array into the original, we are modifying the original array.

  for (i = 0; i < n; i++)
    arr[i] = b[i];
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}

#include<stdio.h>
int main() 
{
   int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
 /*n1 size of first array (i.e. arr1[]), n2 size of second array(i.e. arr2[]), 
   size is the total size of the new array (array_new[]) */
 
   scanf("%d", &n1); //Get the size of first array from test data and store it in n1.
   
   for (i = 0; i < n1; i++)
      scanf("%d", &arr1[i]); //Accepts the values for first array 
 
   scanf("%d", &n2); //Get the size of second array from test data and store it in n2.
   
   for (i = 0; i < n2; i++)
      scanf("%d", &arr2[i]); //Accepts the values for second array

int j;
for (i=0;i<n1;++i)
array_new[i]=arr1[i];
size = n1 + n2;
for(i=0, j=n1; j<size && i<n2; ++i, ++j)
array_new[j] = arr2[i];

//Printing after merging

for (i = 0; i < size; i++) {
      printf("%d\n", array_new[i]);
   }

}

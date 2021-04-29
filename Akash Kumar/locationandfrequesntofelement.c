#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;
   //"search" is the key element to search and 'n' is the total number of element of the array
   // "count" is to store total number of elements

 scanf("%d", &n); //Number of elements is taken from test case

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); // The element to search is taken from test case



for (c = 0; c < n; c++)
{
if (array[c] == search)
{
printf("%d is present at location %d.\n", search, c+1);
count++;
}
}
if (count == 0)
printf("%d is not present in the array.\n", search);
else
printf("%d is present %d times in the array.\n", search, count);
return 0;
}

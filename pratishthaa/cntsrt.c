#include <stdio.h>
void countingsort(int arr[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
            C[i] = 0;
    for (j =1; j <= n; j++)
            C[arr[j]] = C[arr[j]] + 1;
    for (i = 1; i <= k; i++)
            C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
            B[C[arr[j]]] = arr[j];
            C[arr[j]] = C[arr[j]] - 1;
    }
    printf("\nThe Sorted array is :\n");
    for(i = 1; i <= n; i++)
          printf(" %d", B[i]);
}
 
int main()
{
    int n,i,k = 0, arr[15];
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n\nEnter the elements to be sorted :\n");
    for ( i = 1; i <= n; i++)
    {
         scanf("%d", &arr[i]);
         if (arr[i] > k)
         {
            k = arr[i];
         }
    }
    countingsort(arr, k, n);
    return 0;
 
}

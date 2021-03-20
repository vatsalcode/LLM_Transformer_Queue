//Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Use of malloc
    int *ptr;
    int n;
    printf("First we are using malloc\n");
    printf("Enter the size of array:");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    free(ptr); //As we have freed the memory before printing it so we would not get any proper output
               //We will recieve garbage value

    for (int i = 0; i < n; i++)
    {
        printf("\n The value of element number %d of this array is %d", i + 1, ptr[i]);
    }
    //Use of calloc
    printf("\n\nNow we are using calloc\n\n");

    int *ptr1;
    int p;
    printf("Specify size for calloc array\n");
    scanf("%d", &p);
    ptr1 = (int *)calloc(p, sizeof(int));
    for (int i = 0; i < p; i++)
    {
        printf("Enter the value no %d of this array\n", i + 1);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < p; i++)
    {
        printf("\n The value of element number %d of this array is %d", i + 1, ptr1[i]);
    }
    //If we didnt give any input then it will assign value 0 in calloc and garbage value in malloc

    //Use of realloc
    printf("\n\nNow we are using realloc\n\n");

    printf("Specify size for new realloc array\n");
    scanf("%d", &p);
    ptr1 = (int *)realloc(ptr1, p * sizeof(int));
    for (int i = 0; i < p; i++)
    {
        printf("Enter the value no %d of this array\n", i + 1);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < p; i++)
    {
        printf("\n The value of element number %d of this array is %d", i + 1, ptr1[i]);
    }

    //This realloc has not created a new array instead it has changed memory allocation of calloc in this case
    //We have changed the size of array

    free(ptr1);

    return 0;
}

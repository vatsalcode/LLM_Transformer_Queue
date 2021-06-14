#include <stdio.h>
int min_linearsearch(int numbers[], int n)
{
    int min = numbers[0];
    int i;
    for (i = 1; i <= n; i++)
    {
        if (min > numbers[i])
            min = numbers[i];
    }
    return min;
}
int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int numbers[n];
    int i;
    int min ;
    printf("Enter %d numbers : ", n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    min = min_linearsearch(numbers,n);
    printf("\nMinimum number in the array is : %d\n", min);
    return 0;
    }

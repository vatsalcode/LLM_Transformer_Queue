#include <stdio.h>
void array_reversal(int arr[])
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}
int main()
{

    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of %d element\n", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array you entered is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    array_reversal(arr);

    printf("The array reversed is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

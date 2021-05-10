#include <stdio.h>
#include<stdlib.h>

void display(int arr[], int n)
{
    //Travesral(visiting all elements of the array that are being used in space)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortedDeletion(int arr[], int size, int index)
{
    //Deletion(Deleting elements at an index i by pushing all elements back)
    for (int i =index; i < size-1; i++)
    {

        arr[i] = arr[i + 1];
    }
    display(arr, size );
}

int main()
{

    int size, index;
    printf("Specify Size of array: ");
    scanf("%d", &size);
    int arr[size + 1];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n Specify index of element to be deleted: ");
    scanf("%d", &index);

    display(arr, size);
    sortedDeletion(arr, size, index);
    return 0;
}

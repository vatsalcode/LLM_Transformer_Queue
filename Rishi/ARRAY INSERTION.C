#include <stdio.h>

void display(int arr[], int n)
{
    //Travesral(visiting all elements of the array that are being used in space)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortedInsertion(int arr[], int size, int element, int index)
{
    //Insersion(Inserting elements at an index i by pushing all elements back)
    for (int i = size - 1; i >= index; i--)
    {

        arr[i + 1] = arr[i];
    }
    for (int i = 0; i < index; i++)
    {
        arr[i] = arr[i];
    }

    arr[index] = element;
    display(arr, size + 1);
}

int main()
{

    int size, element, index;
    printf("Specify Size of array: ");
    scanf("%d", &size);
    int arr[size + 1];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n Specify element to be added: ");
    scanf("%d", &element);
    printf("\n Specify index: ");
    scanf("%d", &index);

    display(arr, size);
    sortedInsertion(arr, size, element, index);
    return 0;
}

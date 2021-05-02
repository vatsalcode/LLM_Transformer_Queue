#include <stdio.h>

int linear_search(int arr[], int size, int element)
{
    //IT is for both sorted and unsorted array
    int a;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            a = i;
            break;
        }
    }
    return a;
}

int binary_search(int arr[], int size, int element)
{
    //It is only for sorte arraya and preffered over linear search if number of terms are more
    int low = arr[0], mid, high = size - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    printf("Specify Size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Specify element to be serched: ");
    scanf("%d", &element);
    printf("Index using linear search: %d\n", linear_search(arr, size, element));
    printf("Index using binary search: %d", binary_search(arr, size, element));
    return 0;
}

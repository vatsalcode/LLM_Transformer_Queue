//To sort a array in descending order using a different logic
#include <iostream>
using namespace std;

int minimum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<sum)
        {
            sum=arr[i];
        }
        
    }
    return sum;
}

void sort(int arr[], int size)
{
    int sort[size];
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        sort[i] = arr[max];
        arr[max] = minimum(arr,size);
    }
    cout << "Array in descending order: ";
    for (int i = 0; i < size; i++)
    {
        cout << sort[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, size);
    return 0;
}

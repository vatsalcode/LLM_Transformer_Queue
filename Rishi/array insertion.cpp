//Insertion
#include <iostream>
using namespace std;

void insertion(int arr[], int size, int element[], int index[], int number)
{
    for (int k = 0; k < number; k++)
    {

        for (int i = size; i >= index[k]; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index[k]] = element[k];
    }
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size, number;
    cout << "Specify size of array: ";
    cin >> size;
    cout << "Specify no of element to be added: ";
    cin >> number;
    int arr[size + number];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1<<": ";
        cin >> arr[i];
    }

    int element[number], index[number];
    cout<<"\nEnter elements to be added and their respective indexes."<<endl<<endl;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> element[i];
        cout << "Specify Index: ";
        cin >> index[i];
    }

    cout << "New array is: ";
    insertion(arr, size, element, index, number);

    return 0;
}

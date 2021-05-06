//Reorder a array according to given new indexes
/*
int arr[]={22,4,56,3}
index[]={3,0,1,2}
new array: {4,56,3,22}
*/
#include <iostream>
using namespace std;

void enter(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void new_array(int arr[], int index[], int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[index[i]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    display(arr, size);
}

int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int arr[size], index[size];
    cout << "Enter elements of array: " << endl;
    enter(arr, size);
    cout << "Enter new indexes: " << endl;
    enter(index, size);
    new_array(arr, index, size);

    return 0;
}

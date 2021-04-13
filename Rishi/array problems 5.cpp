//Programme to find element which is occuring most in a array
//It will not work when there is no repritive term
//op programme
#include <iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
    int max_count = 0;
    cout << "\nMost occurred number: ";
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count > max_count)
            max_count = count;
    }

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
            if (nums[i] == nums[j])
                count++;
        if (count == max_count)
            cout << nums[i] << endl;
    }
}
int main()
{
    int size;
    cout << "Specify size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    most_occurred_number(arr, size);

    return 0;
}

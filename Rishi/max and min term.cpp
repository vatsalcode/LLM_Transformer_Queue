//This is the programmme to find both max and min terms of the given terms
#include <iostream>
using namespace std;

int max_term(int *ptr, int size)
{
    int max = *ptr;
    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    return max;
}

int min_term(int *ptr, int size)
{
    int min = *ptr;
    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    return min;
}

int main()
{
    int a;
    cout << "Enter no of elements you want to enter: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter element no " << i + 1 << ": ";
        cin >> arr[i];
    }
    int b = max_term(arr, a);
    cout << "The max term of the terms you entered is: " << b << endl;
    int c = min_term(arr, a);
    cout << "The min term of the terms you entered is: " << c << endl;
    return 0;
}

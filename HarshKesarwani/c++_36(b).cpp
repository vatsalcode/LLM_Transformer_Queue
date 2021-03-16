#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 78, 4, 2, 54, 77};
    // sort(arr, arr + 5);                 // will sort first 5 elements in ascending order
    sort(arr, arr + 6, greater<int>()); // will sort in desending order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

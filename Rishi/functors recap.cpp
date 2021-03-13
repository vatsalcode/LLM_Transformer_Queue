//Functors
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    //Function objects: Function wrapped in class so that it is available like an object
    int arr[6] = {1, 22, 3, 44, 25, 36};
    sort(arr, arr + 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    sort(arr, arr + 6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

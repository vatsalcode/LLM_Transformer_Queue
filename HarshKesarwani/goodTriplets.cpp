#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter value in array" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter value " << x + 1 << " : ";
        cin >> arr[x];
    }
    cout << endl;
    int a, b, c;
    cout << "Enter value of a , b , c" << endl;
    cin >> a >> b >> c;
    int count = 0;
    for (int x = 0; x < size - 2; x++)
    {
        for (int y = x + 1; y < size - 1; y++)
        {
            for (int z = y + 1; z < size; z++)
            {
                if ((abs(arr[x] - arr[y]) <= a) && (abs(arr[y] - arr[z]) <= b) && (abs(arr[x] - arr[z]) <= c))
                {
                    count++;
                }
            }
        }
    }
    cout << endl;
    cout << count;
}

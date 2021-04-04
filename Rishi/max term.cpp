//To find max term of the given terms
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int arr[4] = {a, b, c, d};
    int max = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int a, b, c, d;
    cout << "Enter four elementa:" << endl;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << "The max element is: " << ans << endl;

    return 0;
}

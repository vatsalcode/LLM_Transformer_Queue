#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size" << endl;
    cin >> n;
    int a[n];
    int b[n];
    int s[n];
    cout << "Enter number in Array A" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << "A[" << x << "] = ";
        cin >> a[x];
    }
    cout << "Enter number in Array A" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << "B[" << x << "] = ";
        cin >> b[x];
    }
    for (int x = 0; x <= n - 1; x++)
    {
        s[x] = a[x] + b[x];
    }
    cout << "ArrayA\tArrayB\tArrayS" << endl;
    for (int x = 0; x < n; x++)
    {
        cout << a[x] << "\t" << b[x] << "\t" << s[x] << endl;
    }
    return 0;
}

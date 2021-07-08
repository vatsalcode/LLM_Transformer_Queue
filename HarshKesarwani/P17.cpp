#include <iostream>
using namespace std;

int main()
{
    char p;
    cout << "Enter character" << endl;
    cin >> p;
    cout << endl;
    for (int x = 5; x >= 3; x--)
    {
        for (int y = x; y >= 1; y--)
        {
            cout << p;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

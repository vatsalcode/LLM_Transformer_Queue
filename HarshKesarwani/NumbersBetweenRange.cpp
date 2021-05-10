#include <iostream>
using namespace std;

int main()
{
    int size;
    int a;
    int b;
    cout << "Enter size " << endl;
    cin >> size;
    cout<<"Enter range a and b"<<endl;
    cin>>a>>b;
    int arr[size];
    cout << "Enter numbers " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }

    cout<<"All numbers between range"<<endl;
    for (int x = 0; x < size; x++)
    {
        if (arr[x] > a && arr[x] < b)
        {
            cout << arr[x] << endl;
        }
    }

    return 0;
}

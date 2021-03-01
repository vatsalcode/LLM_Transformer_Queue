#include <iostream>
using namespace std;

int main()
{
    //basic example

    int a = 4;
    int *ptr = &a;
    cout << "Before value change " << *(ptr) << endl;
    *ptr = 999;
    cout << "After value change " << *(ptr) << endl
         << endl;

    //new operator and delete operator/keyword

    int *s = new int(5);
    float *p = new float(5.5);
    cout << "Value at address s and p : " << *(s) << " & " << *(p) << endl
         << endl;
    ;
    cout << "Before delete operator " << endl;
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout << "Value of arr[0] is " << arr[0] << endl;
    cout << "Value of arr[1] is " << arr[1] << endl;
    cout << "Value of arr[2] is " << arr[2] << endl
         << endl;

    cout << "After delete operator" << endl;
    delete[] arr;
    cout << "Value of arr[0] is " << arr[0] << endl;
    cout << "Value of arr[1] is " << arr[1] << endl;
    cout << "Value of arr[2] is " << arr[2] << endl
         << endl;
    return 0;
}

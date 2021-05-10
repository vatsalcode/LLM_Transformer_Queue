#include <iostream>
using namespace std;

int main()
{
    //Basic example
    int a = 4;
    int *p = &a;
    cout << "The value of a is: " << *p << endl;

    //New operator
    int *q = new int(40);
    cout << "The value at address q is: " << *q << endl;

    //Delete operator  (This frees the memory of int or any array)
    int *r = new int[3];
    r[0] = 10;
    *(r + 1) = 20; //This will aslo work in block 2
    r[2] = 30;
    delete[] r;
    cout << "The value of array[0] is : " << r[0] << endl;
    cout << "The value of array[1] is : " << r[1] << endl;
    cout << "The value of array[2] is : " << r[2] << endl;
    return 0;
}

1) learned about templates

#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;

    Vector(int n)
    {
        size = n;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int x = 0; x < size; x++)
        {
            d += this->arr[x] * v.arr[x];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    Vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float d = v1.dotProduct(v2);
    cout << d << endl;

    return 0;
}

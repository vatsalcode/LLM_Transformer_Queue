/*
To add different data types using templates
*/
#include <iostream>
using namespace std;

template <class T>
class AddElements
{
    T a;

public:
    AddElements(T number)
    {
        a = number;
    }
    T add(T num)
    {
        return num + a;
    }
    string concatenate(string num)
    {
        return a + num;
    }
};
int main()
{
    int n, i;
    cout<<"Enter number: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cout<<"Enter type: ";
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cout<<"Enter two elements: ";
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cout<<"Enter two elements: ";
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cout<<"Enter two elements: ";
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}

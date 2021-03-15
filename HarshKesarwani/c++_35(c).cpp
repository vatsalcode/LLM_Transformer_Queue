#include <iostream>
#include <vector>
using namespace std;

template <class t>
void display(vector<t> &v)
{
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec(6,27); // 6 - element vector of 27s
    display(vec);
    cout<<vec.size()<<endl;
    return 0;
}

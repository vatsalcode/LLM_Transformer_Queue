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
    vector<int> vec1; // zero length integer vector
    vector<char>vec2(4); // 4 - element character element
    vector<char>vec3(vec2); // 4 - element character element from vec2
    vector<int> vec4(6,27); // 6 - element vector of 27s
    vec2.push_back('5');
    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    return 0;
}

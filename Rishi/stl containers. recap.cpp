#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    //ways to create  vector
    vector<int> vec1; //zero length vector
    int element, size;
    cout << "Specify size of vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    //vec1.pop_back();  // It deleted the last element from the given vector
    display(vec1);
    cout << endl;
    vector<int>::iterator iter = vec1.begin(); //This is the method to create iterator which points at objects
                                               //Default iterator like vec1.begin() starts default with first place
    //vec1.insert(iter, 566);                    //This will insert 566 at first position of array but only 1 copy
    vec1.insert(iter, 5, 566);
    display(vec1);
    cout << endl;
    /*
    vector<char> vec2(4); //4 element vector
    vec2.push_back('5');
    display(vec2);


    vector<char> vec3(vec2); //4 element vector from vec2
    display(vec3);
*/
    vector<int> vec4(6, 3); //6 element vector from 3's(Important)
    vec4.erase(vec4.begin()+2,vec4.begin()+3);
     display(vec4);
    return 0;
}

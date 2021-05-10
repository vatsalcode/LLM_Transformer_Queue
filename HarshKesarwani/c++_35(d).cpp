#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> list1;    //list of zero length
    list<int> list2(7); //empty list of size 7
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list<int>::iterator iter;
    iter = list1.begin();
    cout << *iter << "  ";

    iter++;
    cout << *iter << "  ";

    return 0;
}

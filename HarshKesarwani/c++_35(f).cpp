#include <iostream>
#include <list>
using namespace std;

void display(list<int> lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "  ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; //list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);


    list<int> list2(3); //empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    list1.sort();
    list2.sort();

    list1.merge(list2);
    cout<<"List 1 after merging"<<endl;
    display(list1);
    return 0;
}

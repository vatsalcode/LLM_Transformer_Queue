#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    list<int> mylist{};
    mylist.push_front(43);
    mylist.push_front(58);
    mylist.push_front(24);
    mylist.push_front(6);
    mylist.push_front(45);
    mylist.push_front(89);
    mylist.push_front(7);
  
    mylist.sort();
  
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}

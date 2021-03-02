//List in STL
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &list2)
{
    list<int>::iterator it;
    for (it = list2.begin(); it != list2.end(); it++)

        cout << *it << " "; //For single commands dont need to use bracket
}

int main()
{
    list<int> list1; //list of zero length
                     //We have to add elements via push back becuse it is a empty list
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(4); //add elements at last
    list1.push_back(3);
    list1.push_back(5);
    display(list1);
    cout << endl;

    list1.sort(); //It will sort the list in the ascending order
    display(list1);
    cout << endl;

    list1.pop_back(); //removes last element
    display(list1);

    list1.pop_front();
    cout << endl; //removes first element
    display(list1);

    list1.remove(3);
    cout << endl; //remove all elements with value of 3
    display(list1);
    cout<<endl;

    list1.reverse(); //It will reverse the list
    display(list1);
    cout << endl;

    list<int> list3(3);                       // empty list of 4 elements
    list<int>::iterator iter = list3.begin(); // so places are creted but they are empty we just need to add elements
    *iter = 45;
    iter++;
    *iter = 43;
    iter++;
    *iter = 44;
    iter++;
    display(list3);
    cout << endl;
    
    list1.merge(list3);          //This will merge the two list
    cout << "List 1 after merging : ";
    display(list1);

    return 0;
}

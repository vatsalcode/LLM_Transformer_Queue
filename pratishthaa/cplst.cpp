#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int myints[] = {5, 6, 3, 2, 7};
    list<int> l, l1 (myints, myints + sizeof(myints) / sizeof(int));
    list<int>::iterator it;
    int choice, item;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"List Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element at the Front"<<endl;
        cout<<"2.Insert Element at the End"<<endl;
        cout<<"3.Delete Element at the Front"<<endl;
        cout<<"4.Delete Element at the End"<<endl;
        cout<<"5.Front Element of List"<<endl;
        cout<<"6.Last Element of the List"<<endl;
        cout<<"7.Size of the List"<<endl;
        cout<<"8.Resize List"<<endl;
        cout<<"9.Remove Elements with Specific Values"<<endl;
        cout<<"10.Remove Duplicate Values"<<endl;
        cout<<"11.Reverse the order of elements"<<endl;
        cout<<"12.Sort Forward List"<<endl;
        cout<<"13.Merge Sorted Lists"<<endl;
        cout<<"14.Display Forward List"<<endl;
        cout<<"15.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted at the front: ";
            cin>>item;
            l.push_front(item);
            break;
        case 2:
            cout<<"Enter value to be inserted at the end: ";
            cin>>item;
            l.push_back(item);
            break;
        case 3:
            item = l.front();
            l.pop_front();
	    cout<<"Element "<<item<<" deleted"<<endl;
            break;
        case 4:
            item = l.back();
            l.pop_back();
	    cout<<"Element "<<item<<" deleted"<<endl;
            break;
        case 5:
	    cout<<"Front Element of the List: ";
	    cout<<l.front()<<endl;
            break;
        case 6:
            cout<<"Last Element of the List: ";
            cout<<l.back()<<endl;
            break;
        case 7:
            cout<<"Size of the List: "<<l.size()<<endl;
            break;
        case 8:
            cout<<"Enter new size of the List: ";
            cin>>item;
            if (item <= l.size())
                l.resize(item);
            else
                l.resize(item, 0);
            break;
        case 9:
            cout<<"Enter element to be deleted: ";
            cin>>item;
            l.remove(item);
            break;
        case 10:
            l.unique();
            cout<<"Duplicate Items Deleted"<<endl;
            break;
        case 11:
            l.reverse();
            cout<<"List reversed"<<endl;
            break;
        case 12:
            l.sort();
            cout<<"List Sorted"<<endl;
            break;
        case 13:
            l1.sort();
            l.sort();
            l.merge(l1);
            cout<<"Lists Merged after sorting"<<endl;
            break;
        case 14:
            cout<<"Elements of the List:  ";
            for (it = l.begin(); it != l.end(); it++)
                cout<<*it<<"  ";
            cout<<endl;
            break;
	case 15:
            exit(1);
	    break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}

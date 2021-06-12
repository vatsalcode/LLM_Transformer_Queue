#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    array<int, 5> arr;
    array<int, 5>::iterator it;
    int choice, item;
    arr.fill(0);
    int count = 0;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"Array Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Array"<<endl;
        cout<<"2.Size of the array"<<endl;
        cout<<"3.Front Element of Array"<<endl;
        cout<<"4.Back Element of Array"<<endl;
        cout<<"5.Display elements of the Array"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted: ";
            cin>>item;
            arr.at(count) = item;
            count++;
            break;
        case 2:
            cout<<"Size of the Array: ";
            cout<<arr.size()<<endl;
            break;
        case 3:
            cout<<"Front Element of the Array: ";
            cout<<arr.front()<<endl;
            break;
        case 4:
            cout<<"Back Element of the Stack: ";
            cout<<arr.back()<<endl;
            break;
        case 5:
            for (it = arr.begin(); it != arr.end(); ++it )
                cout <<" "<< *it;
            cout<<endl;
            break;
        case 6:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}

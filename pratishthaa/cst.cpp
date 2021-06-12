#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    stack<int> st;
    int choice, item;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"Stack Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Stack"<<endl;
        cout<<"2.Delete Element from the Stack"<<endl;
	cout<<"3.Size of the Stack"<<endl;
        cout<<"4.Top Element of the Stack"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be inserted: ";
            cin>>item;
            st.push(item);
            break;
        case 2:
            item = st.top();
            st.pop();
	    cout<<"Element "<<item<<" Deleted"<<endl;
            break;
        case 3:
	    cout<<"Size of the Queue: ";
	    cout<<st.size()<<endl;
            break;
        case 4:
	    cout<<"Top Element of the Stack: ";
	    cout<<st.top()<<endl;
            break;
        case 5:
            exit(1);
	    break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}

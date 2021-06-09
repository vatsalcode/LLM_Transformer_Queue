#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    int choice, pos, len;
    string::iterator it;
    size_t found;
    string s, str = "This is a Test String.";
    cout<<"Initial String is--> "<<str<<endl;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"String Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Substring in a String"<<endl;
        cout<<"2.Erase Substring from a String"<<endl;
	cout<<"3.Append Substring to a String"<<endl;
        cout<<"4.Replace the String with a Substrng"<<endl;
        cout<<"5.Size of the String"<<endl;
        cout<<"6.Find substring in a String"<<endl;
        cout<<"7.Display the String"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the substring to be inserted: ";
            cin>>s;
            cout<<"Position after which substring to be inserted: ";
            cin>>pos;
            if (pos <= str.length())
                str.insert(pos, s);
            else
                cout<<"Position out of bounds"<<endl;
            break;
        case 2:
            cout<<"Position after which substring to be erased: ";
            cin>>pos;
            cout<<"Length of the substring to be deleted: ";
            cin>>len;
            str.erase(pos, len);
            break;
        case 3:
            s = " This is an appended string.";
            str.append(s);
            break;
        case 4:
            s = "n example";
            str.replace(9, 5, s);
            break;
        case 5:
            cout<<"Size of the string: "<<str.size()<<endl;
	    break;
        case 6:
            cout<<"Enter substring to be found: ";
            cin>>s;
            found = str.find(s);
            if (found != string::npos)
                cout <<"Substring "<<s<<" found at " << found <<endl;
            else
                cout <<"Substring "<<s<<" not found"<<endl;
            break;
        case 7:
            for (it = str.begin(); it != str.end(); ++it)
                cout<<*it;
            cout<<endl;
            break;
        case 8:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}

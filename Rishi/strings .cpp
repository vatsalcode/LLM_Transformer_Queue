//Strings
#include <iostream>
#include <string>

using namespace std;

int main()
{                       //character strings
    string str = "Hlo"; //to print a string
    cout << str << endl;

    string str2 = "Hlo I am a nice person"; //all words will be printed
    cout << str2 << endl;

    string str1;
    cout << "Enter the string: " << endl;
    getline(cin, str1); //To get a multiword text
    cout << str1 << endl;

    string s1 = "fam";
    string s2 = "ily";
    // s1.append(s2);
    //cout<<s1<<endl;      //this will also add two string
    cout << s1 + s2 << endl; //this will add two strings

    string s = (s1 + s2).substr(2, 3); //This will create a substrate whill will start from place 2 and have 3 chars
    cout << s << endl;

    cout << (s1 + s2).find("mil") << endl; //This will tell the place at starting of that index

    s1.insert(2, "yo"); //This will add yo befor place two
    cout << s1 << endl; //Also first 2 define the place and second yo represesnts the string to be inserted

    s1.erase(2, 2); //This will erase the letters starting from place 1 and letters deleted will be 2
    cout << s1 << endl;

    cout << s1.size() << endl;   //This will define the size of of the given string
    cout << s1.length() << endl; //This is also the same thing as size

    cout << s1[2] << endl; //This will print members just like array starting from 0

    s1.clear(); //This will clear the entire string
    cout << s1;
    if (s1.empty())
    { //to check if the string is empty or not
        cout << "string is empty" << endl;
    }

    //Numerical strings
    string a = "788"; //To convert string in  int
    int x = stoi(a);  //stoi stands for string to input
    cout << x << endl;

    int b = 786;
    cout << to_string(b) << endl; //This converts int to strings

    return 0;
}

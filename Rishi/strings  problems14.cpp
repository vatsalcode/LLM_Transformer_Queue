//Write a program to delete the word "the" in the sentence "This is the lion in the cage".
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    cout << "Enter text: ";
    getline(cin, s);
    cout << "Specify word to find: ";
    getline(cin, s1);
    int a = s.find(s1);
    s.erase(a, s1.length());
    cout << "Remaining string is: " << s << endl;

    return 0;
}

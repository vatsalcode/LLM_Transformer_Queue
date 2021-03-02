#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    //Map is an associative array
    map<string, int> marks;
    marks["Harry"] = 99;
    marks["Rishi"] = 101;
    marks["Ansh"] = 9;

    marks.insert({{"vansh", 12}, {"tushar", 0}});

    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << endl
         << "The size is: " << marks.size() << endl;
    cout << endl
         << "The max size is: " << marks.max_size() << endl;
    cout << endl
         << "The empty's return value is: " << marks.empty() << endl;

    return 0;
}

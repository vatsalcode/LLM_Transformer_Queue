#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harsh"] = 100;
    marksMap["Rohan"] = 59;
    marksMap["Jack"] = 49;

    marksMap.insert({{"Elizabeth", 84}, {"Philip", 83}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "  " << (*iter).second << endl;
    }

    cout << "The size is " << marksMap.size() << endl;
    cout << "The max size is " << marksMap.max_size() << endl;
    cout << "The empty return value is " << marksMap.empty() << endl;
    return 0;
}

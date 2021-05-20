#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    string str1("first string");
    string str2(str1);
    string str3(5, '#');
    string str4(str1, 6, 6);
    string str5(str2.begin(), str2.begin() + 5);
  
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
  
    string str6 = str4;
  
    str4.clear();
  
    int len = str6.length();
    cout << "Length of string is : " << len << endl;
  
    char ch = str6.at(2);
  
  
    cout << "third character of string is : " << ch << endl;
  
    char ch_f = str6.front();
    char ch_b = str6.back();   
  
    cout << "First char is : " << ch_f << ", Last char is : "
         << ch_b << endl;
  
    const char* charstr = str6.c_str();
    printf("%s\n", charstr);
  
    str6.append(" extension");
    
    str4.append(str6, 0, 6);
  
    cout << str6 << endl;
    cout << str4 << endl;
  
    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4)
             << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;
  
    cout << str6.substr(7, 3) << endl;
    cout << str6.substr(7) << endl;
  
    str6.erase(7, 4);
    cout << str6 << endl;
  
    str6.erase(str6.begin() + 5, str6.end() - 3);
    cout << str6 << endl;
  
    str6 = "This is a examples";
    str6.replace(2, 7, "ese are test");
  
    cout << str6 << endl;
    return 0;
}

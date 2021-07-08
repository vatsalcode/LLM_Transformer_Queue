#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter number to check if it is Disarium Number" << endl;
    cin >> num;
    int sum = 0;
    string copy_num = to_string(num);
    int l = copy_num.length();
    for (int x = num; x != 0; x = x / 10)
    {
        int d = x % 10;
        sum = sum + pow(d, l);
        l--;
    }
    if (sum == num)
    {
        cout << num << " IS A DISARIUM NUMBER" << endl;
    }
    else
    {
        cout << num << " IS NOT A DISARIUM NUMBER" << endl;
    }
    return 0;
}

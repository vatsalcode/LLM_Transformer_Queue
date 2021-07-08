#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> v;
    int size;
    bool flag = false;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elememts" << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }
    sort(arr, arr + size);
    int k;
    cout << "Enter number k" << endl;
    cin >> k;
    for (int x = 0; x < size - 3; x++)
    {
        for (int y = x + 1; y < size - 2; y++)
        {
            for (int z = y + 1; z < size - 1; z++)
            {
                for (int p = z + 1; p < size; p++)
                {
                    if (arr[x] + arr[y] + arr[z] + arr[p] == k)
                    {
                        string s1 = to_string(arr[x]);
                        string s2 = to_string(arr[y]);
                        string s3 = to_string(arr[z]);
                        string s4 = to_string(arr[p]);
                        string s = s1 + s2 + s3 + s4;
                        v.push_back(s);
                        flag = true;
                    }
                }
            }
        }
    }
    if (flag == false)
    {
        cout << "No such quadruple present" << endl;
    }
    else
    {
        vector<string>::iterator ip;
        ip = std::unique(v.begin(), v.begin() + v.size());
        v.resize(std::distance(v.begin(), ip));
        int n = 0;
        for (ip = v.begin(); ip != v.end(); ip++)
        {
            cout << *ip<<"$"<<endl;
        }
    }
    return 0;
}

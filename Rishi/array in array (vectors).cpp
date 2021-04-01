/*
in first line take input of  size of array a and no of queries
store a array of k integers in arr[i]  (array at index of an array)
then in next n lines take first input of size of array and then take input of element of array
then take input of queries in format i j where i is index of array a whereas j is element of that index in array of array a
print the value of element
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; j++)
        {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }

    for (int k = 0; k < q; k++)
    {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }

    return 0;
}

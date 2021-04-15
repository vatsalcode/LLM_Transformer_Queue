/*
Input a string of alphabets. Find out the number of occurrence of all alphabets in that string. Find out the
 alphabet with maximum occurrence.
*/
#include <iostream>
#include <string>
using namespace std;

int max(int arr[], int size)
{
    int a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    return a;
}

int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    int frequency[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s.at(i) == s.at(j) && s.at(i) != '0' && s.at(i) != ' ')
            {
                count++;
                s.at(j) = '0';
            }
        }
        if (s.at(i) != ' ' && s.at(i) != '0')
        {
            cout << "Number of occurences of character " << s.at(i) << " is: " << count << endl;
        }

        frequency[i] = count;
    }
    int sum = max(frequency, s.length());
    cout << "The maximum occuring characters are: ";
    for (int i = 0; i < s.length(); i++)
    {
        if (sum == frequency[i])
        {
            cout << s.at(i) << " ";
        }
    }

    return 0;
}

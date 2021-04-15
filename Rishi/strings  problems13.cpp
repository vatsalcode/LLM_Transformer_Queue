//Write a program to find out the largest and smallest word in the string "This is an umbrella".
//But this will only print latest smallest and largest numbers around
#include <iostream>
#include <string>
using namespace std;

int max_index(int arr[], int size)
{
    int sum = arr[1] - arr[0], j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] > sum)
        {
            j = i;
            sum = arr[i + 1] - arr[i];
        }
    }
    return j;
}
int min_index(int arr[], int size)
{
    int sum = arr[1] - arr[0], j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] < sum)
        {
            j = i;
            sum = arr[i + 1] - arr[i];
        }
    }
    return j;
}

int main()
{
    string s;
    cout << "Enter text: ";
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ' ')
        {
            count++;
        }
    }
    int frequency[count + 2], j = 1;
    frequency[0] = 0, frequency[count + 1] = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ' ')
        {
            frequency[j] = i;
            j++;
        }
    }

    int a = max_index(frequency, count + 2);
    int b = min_index(frequency, count + 2);

    cout << "Longest word is: " << s.substr(frequency[a], frequency[a + 1] - frequency[a]) << endl;
    cout << "Shortest word is: " << s.substr(frequency[b], frequency[b + 1] - frequency[b]) << endl;

    return 0;
}

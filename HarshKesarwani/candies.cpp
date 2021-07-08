#include <iostream>
using namespace std;

int main()
{
    int kids, extraCandies;
    cout << "Enter number of kids" << endl;
    cin >> kids;
    int candies[kids];
    string answer[kids];

    for (int x = 0; x < kids; x++)
    {
        cout << "Enter number of candies kid " << (x + 1) << " has" << endl;
        cin >> candies[x];
    }

    cout << "Enter the number of extra candies" << endl;
    cin >> extraCandies;

    int greatest = candies[0];
    for (int x = 0; x < kids; x++)
    {
        if (candies[x] > greatest)
        {
            greatest = candies[x];
        }
    }

    for (int x = 0; x < kids; x++)
    {
        if (candies[x] + extraCandies < greatest)
        {
            answer[x] = "False";
        }
        else
        {
            answer[x] = "True";
        }
    }

    for (int x = 0; x < kids; x++)
    {
        if (x == 0)
        {
            cout << "[" << answer[x] << " , ";
        }
        else if (x == kids - 1)
        {
            cout << answer[x] << "]";
        }
        else
        {
            cout << answer[x] << " , ";
        }
    }

    return 0;
}

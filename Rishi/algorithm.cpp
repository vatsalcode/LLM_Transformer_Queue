//Two different algorithms for a same problem
//We have to find sum of first n natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Specify n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum by algo 1 is " << sum << endl;

    int c = n * (n + 1) / 2;

    cout << "sum by algo 2 is " << c << endl;

    return 0;
}
//Time taken is different in both cases so we have to choose that algorithm which has better time and memory management

/*
Pattern problems
there is an array which containd no of toffes by an individual i th child
extra candies are to be distributed amonf these students , check if they can have maximum candies
more than one student can have maximum candies
explanation:     array{1,2,3,4,5}  extra candies=3;
ouput:           {flase,true,true,true,true}
*/

#include <iostream>
using namespace std;

int max_candies(int *ptr, int size)
{
    int sum = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) > sum)
        {
            sum = *(ptr + i);
        }
    }
    return sum;
}

int main()
{
    int number, extra_candies;
    cout << "Enter no of children: ";
    cin >> number;
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter no of tofees with student no: " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter nof extra candies: ";
    cin >> extra_candies;
    int a = max_candies(arr, number);
    cout << "[";
    for (int j = 0; j < number; j++)
    {
        if (arr[j] + extra_candies >= a)
        {
            cout << "True"
                 << " ";
        }
        else
        {
            cout << "False"
                 << " ";
        }
    }
    cout << "]";
}

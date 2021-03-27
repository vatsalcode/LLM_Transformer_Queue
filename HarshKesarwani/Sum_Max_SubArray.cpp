#include <iostream>
using namespace std;

int Sum_Of_Maximum_SubArray(int arr[], int size_of_arr,int neg_max)
{
    if (neg_max > 0)
    {
        int max_sum = 0;
        for (int x = 0; x < size_of_arr; x++)
        {
            int sum = 0;
            for (int y = x; y < size_of_arr; y++)
            {
                sum = sum + arr[y];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }
            }
        }
        return max_sum;
    }

    else
    {
        return neg_max;
    }
}

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int nums[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter element" << endl;
        cin >> nums[x];
    }

    int neg_max=nums[0];
    for(int x=1;x<size;x++)
    {
        if(nums[x]>neg_max)
        {
            neg_max=nums[x];
        }
    }

    cout << Sum_Of_Maximum_SubArray(nums, size,neg_max);

    return 0;
}

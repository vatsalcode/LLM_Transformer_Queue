#include <iostream>
#include <vector>

std::vector<int> left_rotation(std::vector<int>& arr, int rotations)
{
    std::vector<int> rotated_array;

    for (std::size_t i = rotations; i < arr.size(); ++i)
    {
        rotated_array.push_back(arr[i]);
    }
    for (std::size_t i = 0; i < rotations; ++i)
    {
        rotated_array.push_back(arr[i]);
    }
    return rotated_array;
}

int main()
{
    int num_elements, num_left_rotations;

    std::cin >> num_elements;
    std::cin >> num_left_rotations;

    std::vector<int> input_array(num_elements);
    for (int i = 0; i < num_elements; ++i)
    {
        std::cin >> input_array[i];
    }

    std::vector<int> result_array = left_rotation(input_array, num_left_rotations);

    for (int i = 0; i < num_elements; ++i)
    {
        std::cout << result_array[i] <<" ";
    }
    std::cout << "\n";
}

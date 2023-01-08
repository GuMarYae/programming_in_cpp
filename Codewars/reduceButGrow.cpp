#include <vector>
#include <iostream>

int grow(std::vector<int> nums)
{
    int vectorTOT = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << " ";

        vectorTOT *= nums[i];
        std::cout << "vector total is " << vectorTOT << std::endl;
    }
    return vectorTOT;
};

int main()
{
    std::vector<int> numbers;

    for (int i = 0; i < 4; i++)
    {
        numbers.push_back(i + 1);
        // std::cout << numbers[i] << " " << std::endl;
    }

    grow(numbers);

    return 0;
};
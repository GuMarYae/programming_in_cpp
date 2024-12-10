#include <iostream>
#include <vector>

int main()
{

    std::vector<int> list = {0, 1, 2, 3, 4, 5, 6};

    list.push_back(15);
    std::cout << "{";
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i];    //so this executes
        if (i != list.size() - 1)//then this executes as well before i increments
        {
            std::cout << ",";    //once i == list.size() -1, it doesnt print the comma
        }
    }
    std::cout << "}";
    return 0;
    //system("pause>0");
}

//   g++ -o test .\classWork.cpp
//   ./test
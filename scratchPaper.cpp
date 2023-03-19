#include <iostream>

int main()
{

    enum COLOR
    {
        red,
        green,
        blue
    };

    COLOR color;
    color = green;
    std::cout << color;

    int i;

    for (i = 0; i < 4; i++)
    {
        std::cout << COLOR[i];
    }

    return 0;
}
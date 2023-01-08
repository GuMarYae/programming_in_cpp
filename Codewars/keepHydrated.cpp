#include <iostream>
#include <iomanip>
#include <cmath>

int litres(double);

int main()
{
    double timeElapsed = 6.7;
    double answer = litres(timeElapsed);
    std::cout << answer;

    return 0;
}

int litres(double time)
{
    double numberOfLiters = floor(time * 0.5);
    static_cast<int>(numberOfLiters);
    return numberOfLiters;
}

/*
dumbass codewars wantd this
        int litres(double time)
        {
            double numberOfLiters = (time * 0.5);
            static_cast<int>(numberOfLiters);
            return numberOfLiters;
        }
                    thats literally it smdh
*/
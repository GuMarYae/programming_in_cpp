#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>

int main()
{

    int secondsTOT = time(0);
    int currentSeconds = secondsTOT % 60;
    int minutesTOT = secondsTOT / 60;
    int currentMinute = minutesTOT % 60;
    int hoursTOT = minutesTOT % 60;
    int currentHour = hoursTOT % 24;

    std::cout << currentHour;

    return 0;
}
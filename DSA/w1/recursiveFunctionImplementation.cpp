#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

//g++ -o test .\recursiveFunctionImplementation.cpp
//  ./test

//using namespace std;

//Function to calculate the sum of the first n integer recursively
int sumOfIntegers(int n) {
    //If n is 1, the sum is just 1
    if (n == 1) {
        return 1;
    } else {
        //sum is n plus the sum of the first (n-1) integer
        return n + sumOfIntegers(n - 1);
    }
}

// Main function where we test the sum calculation
int main() {
    int n;
    
    //user
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    //Calculate the sum using the recursive function
    int recursiveSum = sumOfIntegers(n);

    //calc the sum using the formula (n * (n + 1)) / 2
    int formulaSum = (n * (n + 1)) / 2;

    //print both the recursive and formula sums
    std::cout << "Recursive sum of the first " << n << " integer is: " << recursiveSum << std::endl;
    std::cout << "Formula-based sum of the first " << n << " integer is: " << formulaSum << std::endl;

    //validate if they match
    if (recursiveSum == formulaSum) {
        std::cout << "The recursive function matches the formula!" << std::endl;
    } else {
        std::cout << "The recursive function does not match the formula!" << std::endl;
    }

    return 0;
}

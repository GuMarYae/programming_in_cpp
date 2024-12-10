#include <iostream>

// Recursive function to calculate the sum of the first n integers
int sumOfIntegers(int n) {
    if (n <= 0) return 0;
    return n + sumOfIntegers(n - 1);
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int recursiveSum = sumOfIntegers(n);
    int formulaSum = (n * (n + 1)) / 2;

    std::cout << "Recursive sum: " << recursiveSum << std::endl;
    std::cout << "Formula sum: " << formulaSum << std::endl;

    return 0;
}

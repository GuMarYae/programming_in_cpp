#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

#include "Loan.h"
#include "loan.cpp"

int main()
{
    double annualInterestRate;
    int numbereOfYears;
    double loanAmount;

    std::cout << "Enter yearly interest rate, for example 8.3: ";
    std::cin >> annualInterestRate;

    std::cout << "Enter the number of years: ";
    std::cin >> numbereOfYears;

    std::cout << "Enter the loan amount: ";
    std::cin >> loanAmount;

    Loan loan(annualInterestRate, numbereOfYears, loanAmount);

    std::cout << "Monthly payment is: " << loan.getMonthlyPayment() << "\n"
              << "The total payment is: " << loan.getTotalPayment();

    return 0;
}

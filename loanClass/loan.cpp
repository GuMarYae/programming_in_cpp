#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

#include "Loan.h"

// remember, copy and paste constructors and functions, use scope operator
// to scope "Loan" ansd add "{}" to each constructor/ function
// for functions, the scope goes after the variable type

// constructors
// anonymous object with default values
Loan::Loan()
{
    annualInterestRate = 7.9;
    numberOfYears = 5;
    loanAmount = 10000;
};

Loan::Loan(double rate, int year_S, double amount)
{
    annualInterestRate = rate;
    numberOfYears = year_S;
    loanAmount = amount;
};
//=================>getters
// notice how the datatypes are respecting the datafields datatypes

double Loan::getAnnualInterestRate() { return annualInterestRate; }
int Loan::getNumberOfYears() { return numberOfYears; }
double Loan::getLoanAmount() { return loanAmount; }

//=================>setters
// notice how the getters and setters parameters are respecting the datafields datatypes
void Loan::setAnnualInterestRate(double newInterestRate)
{
    annualInterestRate = newInterestRate;
};
void Loan::setNumberOfYears(int newNumberOfYears)
{
    numberOfYears = newNumberOfYears;
};
void Loan::setLoanAmount(double newLoanAmount)
{
    loanAmount = newLoanAmount;
}
// functions
double Loan::getMonthlyPayment()
{
    // no idea why this is 1200..  but it is two decimals to the right if you just
    // divide by 12. maybe it has something to do with that
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
};
double Loan::getTotalPayment()
{
    return getMonthlyPayment() * numberOfYears * 12;
};
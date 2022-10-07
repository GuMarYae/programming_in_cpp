#include <iostream>

//for the odds of no errors (sometimes, maining this the same as the class,even with the "_h to make it even more different but still gives an error") make the #ifndef all caps

#ifndef LOAN_H //if not defined
#define LOAN_H //then define

class Loan
{
private://these are usually the things that you wount want the user to access
        //in other words, user: " I want to be able ti check my annualInterestRate, the numberOfYears, and the loanAmount"
        //this will help in order to know what actually goes in the datafield.
        //everything in the datafield should be able to have a getter and setter
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;

public:
    // constructors
    Loan(); // anonymous object
    Loan(double r, int y, double a);
    //getters and setters
    double getAnnualInterestRate();
    int getNumberOfYears();
    double getLoanAmount();//notice how the datatypes are respecting the datafields datatypes
    void setAnnualInterestRate(double);
    void setNumberOfYears(int);
    void setLoanAmount(double);//notice how the getters and setters parameters are respecting the datafields datatypes
    //functions
    double getMonthlyPayment();
    double getTotalPayment();
};

#endif //end the if statement1
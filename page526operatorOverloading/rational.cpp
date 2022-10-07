#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>

#include "Rational.h"

// remember, scope them all and brackets for them all
    // constructors
    

    
Rational::Rational()
{
    numerator = 0;
    denominator = 1;
};
Rational::Rational(int a_numerator, int a_denominator)
{
    int factor = gcd(a_numerator, a_denominator);
    this->numerator = ((a_denominator > 0) ? 1 : -1) * a_numerator / factor;
    this->denominator = abs(a_denominator) / factor;
};
// note.. const Rational &secondRational is one parameter.  Remember pointers!!!!
// const Rational &secondRational is like saying |const int number| = 1
// you see how it says Rational add(const ??  remember Rational is a data type that we created, like int.
// so since the scope goes after every datatype, ex int Rationall::, then that means we have to put it after the
// data type that we made; Rational..  so Rational ______  add(const ..
// it looks weird but the second rational is the one being scoped. the one before it is the constructor for the implentation
// it was the definition on the Rational.h file
int Rational::gcd(int numerator, int denominator)
{
    int n1 = abs(numerator);
    int n2 = abs(denominator);
    int gcd = 1;

    for (int k = 1; k <= n1 && k <= n2; k++)
    {
        if (n1 % k == 0 && n2 % k == 0)
            gcd = k;
    }

    return gcd;
}

// n = numerator and d = denominator

Rational Rational::add(const Rational &secondRational) const
{
    int n = numerator * secondRational.getDenominator() + denominator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);

} // note for all of the Rational&'s  its referring to the
Rational Rational::subtract(const Rational &secondRational) const
{
    int n = numerator * secondRational.getDenominator() - denominator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
} // rational class, cause if i put a lowercase "r", itll say
Rational Rational::multiply(const Rational &secondRational) const
{
    int n = numerator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
} // rational is undefined
Rational Rational::divide(const Rational &secondRational) const
{
    int n = numerator * secondRational.getDenominator();
    int d = denominator * secondRational.numerator;
    return Rational(n, d);
}

// functions
int Rational::compareTo(const Rational &secondRational) const
{
    Rational temp = subtract(secondRational);
    if (temp.getNumerator() < 0)
    {
        return -1;
    }
    else if (temp.getNumerator() == 0)
    {
        return 0;
    }
    else
        return 1;
}
bool Rational::equals(const Rational &secondRational) const
{
    if (compareTo(secondRational) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Rational::intValue() const
{
    return getNumerator() / getDenominator();
}
double Rational::doubleValue() const
{
    return 1.0 * getNumerator() / getDenominator();
}
std::string Rational ::toString() const
{
    std::stringstream ss;
    ss << numerator;
    if (denominator > 1)
    {
        ss << "/" << denominator;
    }
    return ss.str();
}

bool Rational::operator<(const Rational &secondRational) const
{
    if (compareTo(secondRational) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int Rational::operator[](int index) const
{
    if (index == 0)
    {
        return numerator;
    }
    else
    {
        return denominator;
    }
};

// functions [getters]
int Rational::getNumerator() const { return numerator; }
int Rational::getDenominator() const { return denominator; }
// static int Rational:: gcd(int,int){}

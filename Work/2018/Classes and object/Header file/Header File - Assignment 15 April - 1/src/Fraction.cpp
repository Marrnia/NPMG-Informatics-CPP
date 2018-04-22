#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

fraction::fraction()
{
    //ctor
}

int fraction :: GCD()
{
    int num = abs(numerator);
    int den = abs(denominator);
    while(num != den)
    {
        if(num > den) num -= den;
        else den -= num;
    }
    return num;
}

void fraction :: Normalization()
{
    if(numerator != 0)
    {
        int gcd = GCD();
        numerator /= gcd;
        denominator /= gcd;
        if(numerator < 0 && denominator < 0)
        {
            numerator = abs(numerator);
            denominator = abs(denominator);
        }
        else if(numerator > 0 && denominator < 0)
        {
            numerator = -numerator;
            denominator = abs(denominator);
        }
    }
}

fraction minimum (fraction f1, fraction f2)
{
    double F1 = f1.numerator / f1.denominator;
    double F2 = f2.numerator / f2.denominator;
    if(F1 < F2)
        return f1;
    else return f2;
}

fraction fraction::operator+(const fraction *f)
{
    fraction sum;
    sum.numerator = numerator * f->denominator + denominator * f->numerator;
    sum.denominator = denominator * f->denominator;
    sum.Normalization();
    return sum;
}

istream &operator >> (istream &input, fraction *f)
{
    do input >> f -> numerator >> f -> denominator;
    while( f-> denominator == 0);
    return input;
}

ostream &operator << (ostream &output, fraction *f)
{
    f->Normalization();
    if(f->numerator == 0 || f->denominator == 1)
        output << f -> numerator;
    else output << f -> numerator << '/' << f -> denominator;
    return output;
}

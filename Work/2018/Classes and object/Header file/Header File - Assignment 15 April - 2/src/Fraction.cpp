#include "Fraction.h"
#include <iostream>
#include <cmath>
#include <algorithm>

#define Size 10

int Fraction :: GCD()
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

void Fraction :: Normalization()
{
    if(numerator != 0)
    {
        int gcd = GCD();
        numerator = numerator / gcd;
        denominator = denominator / gcd;
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

std :: istream &operator >> (std :: istream &input, Fraction *f)
{
    do {std :: cout << "Enter a fraction -> ";input >> f->numerator >> f-> denominator;}
    while(f->denominator == 0);
    return input;
}

std :: ostream &operator << (std :: ostream &output, Fraction *f)
{
    f->Normalization();
    if(f->numerator == 0 || f->denominator == 1)
        output << f->numerator;
    else output << f->numerator << "/" << f->denominator;
    return output;
}

Fraction Fraction :: operator - (const Fraction &f)
{
    Fraction newFraction;
    newFraction.numerator = numerator * f.denominator - denominator * f.numerator;
    newFraction.denominator = denominator * f.denominator;
    newFraction.Normalization();
    return newFraction;
}

Fraction Fraction :: operator + (const Fraction &f)
{
    Fraction newFraction;
    if(numerator != 0 && denominator != 0)
    {
        newFraction.numerator = numerator * f.denominator + denominator * f.numerator;
        newFraction.denominator = denominator * f.denominator;
    }
    else if(numerator == 0 || denominator == 0)
    {
        newFraction.numerator = f.numerator;
        newFraction.denominator = f.denominator;
    }
    newFraction.Normalization();
    return newFraction;
}

Fraction Fraction :: operator * (const Fraction &f)
{
    Fraction newFraction;
    newFraction.numerator = numerator * f.numerator;
    newFraction.denominator = denominator * f.denominator;
    newFraction.Normalization();
    return newFraction;
}

bool operator < (Fraction &f1, Fraction &f2)
{
    Fraction newFraction;
    newFraction = f1 - f2;
    newFraction.Normalization();
    if(newFraction.numerator < 0) return true;
    return false;
}

bool operator > (Fraction &f1, Fraction &f2)
{
    Fraction newFraction;
    newFraction = f1 - f2;
    newFraction.Normalization();
    if(newFraction.numerator > 0) return true;
    return false;
}

Fraction Minimum(Fraction (&f)[Size],const short &numElements)
{
    Fraction minimum;
    minimum = f[0];
    for(int index = 0; index < numElements; index++)
    {
        if(minimum > f[index])
            minimum = f[index];
    }
    return minimum;
}

Fraction Maximum(Fraction (&f)[Size],const short &numElements)
{
    Fraction maximum;
    maximum = f[0];
    for(int index = 0; index < numElements; index++)
    {
        if(maximum < f[index])
            maximum = f[index];
    }
    return maximum;
}

Fraction Amount(const Fraction (&f)[Size],const short &numElements)
{
    Fraction amount;
    amount.numerator = 0;
    amount.denominator = 0;
    for(int index = 0; index < numElements; index++)
    {
        amount = (amount + f[index]);
    }
    amount.Normalization();
    return amount;
}

Fraction Production(const Fraction (&f)[Size], const short &numElements)
{
    Fraction production;
    production.numerator = 1;
    production.denominator = 1;
    for(int index = 0; index < numElements; index++)
        production = (production * f[index]);
    production.Normalization();
    return production;
}

void Fraction :: Write(Fraction (&f)[Size], const short &numElements)
{
    for(int i = 0; i < numElements - 1; i++)
    {
        for(int j = 0; j < numElements - i - 1; j++)
        {
            if(f[j] > f[j+1])
            {
                std :: swap(f[j],f[j+1]);
            }
        }
    }
    for(int index = 0; index < numElements; index++)
    {
        f[index].Normalization();
        std :: cout << &f[index] << " ";
    }
}

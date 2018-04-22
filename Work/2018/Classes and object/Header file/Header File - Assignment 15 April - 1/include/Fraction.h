#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class fraction
{
    public:
        fraction();
        int GCD();
        void Normalization();
        friend fraction minimum(fraction, fraction);
        fraction operator + (const fraction*);
        friend istream &operator >> (istream&, fraction*);
        friend ostream &operator << (ostream&, fraction*);
    private:
        int numerator, denominator;
};

#endif // FRACTION_H

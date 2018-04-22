#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

#define Size 10

class Fraction
{
    private : int numerator, denominator;
    private : int GCD();
    private : void Normalization();
    private : Fraction operator - (const Fraction&);
    private : Fraction operator + (const Fraction&);
    private : Fraction operator * (const Fraction&);
    private : friend bool operator > (Fraction&,Fraction&);
    private : friend bool operator < (Fraction&,Fraction&);

    public : friend std :: istream &operator >> (std :: istream&, Fraction*);
    public : friend std :: ostream &operator << (std :: ostream&, Fraction*);
    public : friend Fraction Minimum(Fraction(&f)[Size], const short&);
    public : friend Fraction Maximum(Fraction(&f)[Size], const short&);
    public : friend Fraction Amount(const Fraction(&f)[Size], const short&);
    public : friend Fraction Production(const Fraction(&f)[Size], const short&);
    public : void Write(Fraction(&f)[Size], const short&);
};

#endif // FRACTION_H

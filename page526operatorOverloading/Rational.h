#include <iostream>
#include <string>
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
    int numerator;
    int denominator;

public:
    // constructors
    Rational();
    Rational(int, int);
    //note.. const Rational &secondRational is one parameter.  Remember pointers!!!!  
    //const Rational &secondRational is like saying |const int number| = 1
    Rational add(const Rational &secondRational) const;      // note for all of the Rational&'s  its referring to the
    Rational subtract(const Rational &secondRational) const; // rational class, cause if i put a lowercase "r", itll say
    Rational multiply(const Rational &secondRational) const; // rational is undefined
    Rational divide(const Rational &secondRational) const;

    // functions
    int compareTo(const Rational &secondRational) const;
    bool equals(const Rational &secodeRaational) const;
    int intValue() const;
    double doubleValue() const;
    std::string toString() const;                               

    // functions [getters]
    int getNumerator() const;
    int getDenominator() const;
};
#endif
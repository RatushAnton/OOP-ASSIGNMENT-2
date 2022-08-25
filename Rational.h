//
// Created by Anton Ratush on 20/08/2022.
//

#ifndef RATIONAL_H
#define RATIONAL_H
#include "Polynomial.h"


class Rational
{
private:
    Polynomial nom, denom;

public:
    Rational();
    Rational(const Polynomial&, const Polynomial&);
    Polynomial &getNom();
    Polynomial &getDenom();
    void print();
    Rational & operator=(const Rational &);
    Rational & operator+(const Rational &) const;
    Rational & operator*(const Rational &) const;
    Rational & operator*(const double) const;
    friend ostream & operator<<(ostream &, const Rational &);
    friend Rational & operator*(const double, const Rational &);
};

#endif //RATIONAL_H

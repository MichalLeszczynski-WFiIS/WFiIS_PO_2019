#pragma once
#include <iostream>
#include <math.h>
#include "Ksztalt.h"
class Trojkat  : public Ksztalt{
public:
Trojkat(double a, double b, double c): _a(a), _b(b), _c(c) {}
~Trojkat() = default;
virtual void wypisz(std::ostream &ostrm) const
{
   ostrm<<"Trojkat o bokach: " << this->_a<<" "<<this->_b<<" "<<this->_c <<std::endl;
}
virtual double polePow() const
{
    double x = (_a + _b + _c) /2;
    return sqrt(x*(x-_a)*(x-_b)*(x-_c));
}
private:
double _a, _b, _c;



};

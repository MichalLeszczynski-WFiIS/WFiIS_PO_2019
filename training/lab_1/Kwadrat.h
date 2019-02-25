#pragma once
#include <iostream>
#include "Ksztalt.h"
class Kwadrat  : public Ksztalt{
public:
Kwadrat(double a): _a(a){}
~Kwadrat() = default;
virtual void wypisz(std::ostream &ostrm) const
{
    ostrm<<"Kwadrat o boku: " << this->_a<<std::endl;
}
virtual double polePow() const
{
    return _a*_a;
}
private:
double _a;




};

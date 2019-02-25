#pragma once
#include <iostream>
#include "Ksztalt.h"
class Kolo : public Ksztalt {
public:
Kolo(double promien): _promien(promien) {}
~Kolo() = default;
virtual void wypisz(std::ostream &ostrm) const
{
   ostrm<<"Kolo o promieniu: " << this->_promien <<std::endl;
}
virtual double polePow() const
{
    return 3.1415 * _promien * _promien;
}
private:
double _promien;

};

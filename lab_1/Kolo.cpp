#include "Kolo.h"

void Kolo::wypisz(std::ostream &stream) const 
{
    stream<< "Kolo o promieniu: " << _radius<< std::endl;
}
double Kolo::polePow() const 
{
    double pole = _radius*_radius* 3.1415;
    return pole;
}
#include "Kwadrat.h"

void Kwadrat::wypisz(std::ostream &stream) const 
{
    stream<< "Kwadrat o boku: " << _side<< std::endl;
}

double Kwadrat::polePow() const 
{
    double pole = _side*_side;
    return pole;
}
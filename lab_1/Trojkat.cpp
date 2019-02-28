#include "Trojkat.h"

void Trojkat::wypisz(std::ostream &stream) const 
{
    stream<< "Trojkat o bokach: " << _a << " "<< _b << " " << _c << std::endl;
}
double Trojkat::polePow() const 
{
    double x = (_a + _b + _c) /2;
    double pole = sqrt(x*(x-_a)*(x-_b)*(x-_c));
    return pole;
}
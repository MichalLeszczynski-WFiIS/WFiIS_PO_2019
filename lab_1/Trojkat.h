#pragma once
#include <iostream>
#include "Ksztalt.h"
#include <math.h>
class Trojkat : public Ksztalt{
public:
Trojkat(double a, double b, double c): _a(a), _b(b), _c(c) {}
~Trojkat() = default;
void wypisz(std::ostream &stream) const;
double polePow() const;

private:
double _a, _b, _c;

};

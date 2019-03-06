#pragma once
#include <iostream>
#include "Ksztalt.h"
class Kolo : public Ksztalt{
public:
Kolo(double radius): _radius(radius) {}
~Kolo() = default;
void wypisz(std::ostream &stream) const;
double polePow() const;


private:
double _radius;

};

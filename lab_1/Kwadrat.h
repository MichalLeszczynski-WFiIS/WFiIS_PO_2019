#pragma once
#include <iostream>
#include "Ksztalt.h"
class Kwadrat : public Ksztalt{
public:

Kwadrat(double side): _side(side) {}

~Kwadrat() = default;
void wypisz(std::ostream &stream) const ;
double polePow() const;

private:
double _side;


};

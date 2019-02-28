#pragma once
#include <iostream>

class Ksztalt {
public:

virtual ~Ksztalt() {}
virtual void wypisz(std::ostream &ostrm) const =0;
virtual double polePow() const =0;

private:


};
void wypisz(const Ksztalt &ksztalt)
{
ksztalt.wypisz(std::cout);
} 

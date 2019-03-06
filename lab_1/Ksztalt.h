#pragma once
#include <iostream>
class Ksztalt {
public:
virtual ~Ksztalt() {}
static void wypisz(const Ksztalt &ksztalt);
virtual void wypisz(std::ostream &stream) const = 0;
virtual double polePow() const = 0;

};

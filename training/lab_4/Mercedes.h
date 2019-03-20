#pragma once
#include <iostream>
#include "Samochod.h"


class Mercedes: public Samochod {
public:
Mercedes(std::string paliwo, int moc, int pojemnosc) : _paliwo(paliwo), _moc(moc), _pojemnosc(pojemnosc)
 {
     _kolor = Samochod::_color;
 }



private:
std::string _kolor;
std::string _paliwo;
int _moc;
int _pojemnosc;

};

std::ostream operator<< (std::ostream &ostr, const Mercedes& mercedes)
{
    ostr << "[INFO] Mercedes A" << std::endl;
    ostr << "[INFO] Mercedes A" << std::endl;
    ostr << "[INFO] Mercedes A" << std::endl;

}
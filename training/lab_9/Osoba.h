#pragma once
#include "NumerId.h"
#include <iostream>

class Osoba {
public:

Osoba(std::string imie): m_imie(imie) {}

virtual std::string przedstaw() const = 0;

private:
std::string m_imie;

};

std::ostream& operator<<(std::ostream &ostr,const Osoba& poj)
{
    ostr << poj.przedstaw();
    return ostr;
}
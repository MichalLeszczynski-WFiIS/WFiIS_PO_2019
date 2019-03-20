#pragma once
#include <iostream>
#include "Silnik.h"

class Samochod {
public:
static void DefaultColor(std::string color)
{
    _color = color;
}

protected:
static std::string _color;


};

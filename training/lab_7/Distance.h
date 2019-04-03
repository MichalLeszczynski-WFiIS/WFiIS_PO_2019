#pragma once
#include <iostream>
#include "Haversine.h"

class Distance {
public:
Distance(const Coordinate &a,const Coordinate &b): m_value(Haversine(a.Longitude(), a.Latitude(), b.Longitude(), b.Latitude())) {}
Distance(float lo1, float la1, float lo2, float la2): m_value(Haversine(lo1, la1, lo2, la2)) {}

double Value()
{
    return m_value;
}

private:
double m_value;

};

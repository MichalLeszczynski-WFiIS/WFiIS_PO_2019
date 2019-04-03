#pragma once
#include <iostream>
#include "Shape.h"

class Rectangle: public Shape {
public:
Rectangle(double a, double b = 0): m_side_a(a), m_side_b(b==0? a : b )   {}
virtual ~Rectangle() {}


void operator*=(double factor) override
{
    m_side_a*=factor;
    m_side_b*=factor;
}

virtual void draw() override 
{
    std::cout << "Rectangle with sides " << m_side_a << ", " << m_side_b << std::endl;
}


private:
double m_side_a;
double m_side_b;

};
 
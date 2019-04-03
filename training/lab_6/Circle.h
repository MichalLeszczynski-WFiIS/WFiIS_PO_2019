#pragma once
#include <iostream>
#include "Shape.h"

class Circle: public Shape {
public:
Circle(double radius): m_radius(radius) {}
virtual ~Circle() {}

void operator*=(double factor) override
{
    m_radius*=factor;
}

virtual void draw() override 
{
    std::cout << "Circle with radius " << m_radius << std::endl;
}

private:
double m_radius;

};

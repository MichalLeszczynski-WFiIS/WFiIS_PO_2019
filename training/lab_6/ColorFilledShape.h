#pragma once
#include <iostream>
#include "ColoredShape.h"

class ColorFilledShape : public ColoredShape {
public:
ColorFilledShape(Shape* shape): ColoredShape(shape) {}
virtual ~ColorFilledShape() {}
virtual void draw() override
{
    m_shape->draw();
    std::cout << "-- with " << m_color << " filling" << std::endl;
}

private:

};

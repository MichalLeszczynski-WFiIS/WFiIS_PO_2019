#pragma once
#include <iostream>
#include "ColoredShape.h"

class ColorBorderShape : public ColoredShape {
public:
ColorBorderShape(Shape* shape): ColoredShape(shape) {}
virtual ~ColorBorderShape() {}
virtual void draw() override
{
    m_shape->draw();
    std::cout << "-- with " << m_color << " border" << std::endl;
}


private:


};

#pragma once
#include <iostream>
#include "Shape.h"

enum Colors{
    BLUE,
    RED,
    GREEN,
    WHITE
};

class ColoredShape : public Shape {
public:
ColoredShape(Shape* shape): m_shape(shape), m_color(Colors::WHITE) {}
virtual ~ColoredShape() {delete m_shape;}

virtual void setColor(Colors color)
{
    m_color = color;
}

virtual void operator*=(double) {}

protected:
Shape* m_shape;
Colors m_color;
};



std::ostream & operator<<(std::ostream &ostr, Colors color)
{
    switch(color){
    case BLUE: 
    ostr << "blue";
    break;
    case RED:
    ostr << "red";
    break;
    case GREEN:
    ostr << "green";
    break;
    case WHITE:
    ostr << "white";
    break;
    }
return ostr;
}
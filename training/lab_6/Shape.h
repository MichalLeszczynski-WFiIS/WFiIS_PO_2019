#pragma once
#include <iostream>

class Shape {
public:
virtual ~Shape() {}

virtual void scale(double factor)
{
    *this*=factor;
}

virtual void operator*=(double factor) = 0;

virtual void draw() =0;


private:


};

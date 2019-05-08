#pragma once
#include <iostream>

class Punkt {
public:
Punkt(int x, int y): m_x(x), m_y(y) {}

template <int i> int wsp() const
{ 
    return i==0 ? m_x : m_y;
}

bool operator>(Punkt b)
{
    if(m_x == b.m_x)
    return m_y > b.m_y;
    else 
    return m_x > b.m_x;
}

template <typename T> static T max(T a, T b)
{
    return (a>b) ? a : b;
}

template <typename T> static T min(T a, T b)
{
    return (a>b) ? b : a;
}



private:
int m_x;
int m_y;

};

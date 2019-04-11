#pragma once
#include <iostream>

class NumerId {
public:

unsigned int get_id() const
{
    return m_numer;
}

private:
unsigned int m_numer;

};

std::ostream& operator<<(std::ostream &ostr,const NumerId& num)
{
    ostr << num.get_id();
    return ostr;
}
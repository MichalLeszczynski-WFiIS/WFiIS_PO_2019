#pragma once
#include <iostream>
#include "Number.h"

class OutOfRange {
public:

OutOfRange(Number& num): m_num(num) {}

~OutOfRange() 
{
          for(int i = 0; i < get_count(); i++)
    {
        std::cout<< "Destroying number " <<  Number::s_num_container[i]->get_num() << std::endl;
        delete Number::s_num_container[i];
    }
}


Number& get_num() const
{
    return m_num;
}

int get_count() const 
{
    return Number::s_num_container.size();
}



private:
Number& m_num;

};

std::ostream& operator<<(std::ostream &ostr,const OutOfRange& exception);

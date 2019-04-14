#pragma once
#include <iostream>

class Number;

class OutOfRange {
public:

OutOfRange(std::vector<Number*>& num_container, Number num): m_num_container(num_container), m_num(num) {}
void clear(int i) const
{
    delete m_num_container[i];
}

Number& get_num() const
{
    return m_num;
}

int get_count() const 
{
    return m_num_container.size();
}



private:
std::vector<Number*>& m_num_container;
Number& m_num;

};

std::ostream& operator<<(std::ostream &ostr,const OutOfRange& exception);

#pragma once
#include <iostream>
#include <vector>
#include "Stan.h"
class MaszynaStanow {
public:
    MaszynaStanow(): m_counter(0) {}

    void operator+=(Stan* stan)
    {
        m_listaStanow.push_back(stan);
    }
    void start()
    {
        std::cout<< "Rozpoczynamy dzialanie maszyny stanow!"<<std::endl;  
    }
    Stan& operator()()
    {
    return *m_listaStanow[m_counter];
    }

    void operator++()
    {
        ++m_counter;
    }


    void operator--()
    {
        --m_counter;
    }


    friend std::ostream &operator<<(std::ostream &ostr, const MaszynaStanow& m);

private:
std::vector<Stan*> m_listaStanow; 
unsigned int m_counter;
};

std::ostream &operator<<(std::ostream &ostr, const MaszynaStanow& m)
{
    for(unsigned int i=0;i<m.m_listaStanow.size(); i++)
    {
        if(i == m.m_counter)
            ostr<<" >"<< m.m_listaStanow[i]->nazwa() <<"< ";
        else
            ostr<< m.m_listaStanow[i]->nazwa() << " ";
        
    }
  //  ostr<<std::endl;
    return ostr;
}

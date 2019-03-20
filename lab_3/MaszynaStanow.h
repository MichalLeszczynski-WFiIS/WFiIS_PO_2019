#pragma once
#include <iostream>
#include <vector>
#include "Stan.h"
class MaszynaStanow {
public:
    MaszynaStanow(): m_counter(0) {}

    ~MaszynaStanow()
    {
        for(auto item: m_listaStanow)
        {
            delete item;
        }
    }
    void operator+=(Stan* stan)
    { 
       stan->maszyna = this;
        m_listaStanow.push_back(stan);
        m_max_counter++;
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

std::vector<Stan*> m_listaStanow; 

unsigned int getCounter()
{
    return m_max_counter;
}

private:
unsigned int m_counter;
unsigned int m_max_counter;
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
  
    return ostr;
}



void Podsumowanie::operator()() {
		std::cout << "Podsumowanie" <<std::endl;
		for(unsigned int i = 0;i < maszyna->m_listaStanow.size(); i++)
			maszyna->m_listaStanow[i]->podsumowanie();
		
	}  
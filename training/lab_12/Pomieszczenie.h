#pragma once
#include <iostream>

class Pomieszczenie {
public:

Pomieszczenie(std::string name): m_name(name)
{
    std::cout << "Tworze pomieszczenie: "<< m_name << std::endl;
}

void zetrzyj_kurze() const
{
    std::cout << "Scieram kurze w pomieszczeniu: "<< m_name << std::endl;
}

void umyj_podloge() const
{
    std::cout << "Myje podloge w pomieszczeniu: "<< m_name << std::endl;
}

void odkurz() const
{
    std::cout << "Odkurzam pomieszczenie: " << m_name << std::endl;
}

template <typename T> void wstaw(T inserted) const
{
    std::cout << "Wstawiam " << inserted << " do pomieszczenia: " << m_name << std::endl;
}

std::string get_name() const
{
    return m_name;
}

private:
std::string m_name;

};

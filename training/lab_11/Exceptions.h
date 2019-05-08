#pragma once
#include <iostream>

class Exception {
public:
virtual ~Exception() = default;
void PrzedstawSie() {std::cout << "Nazywam sie " << imie() << " o adresie "<< this << std::endl;}
virtual std::string imie() {return "noname";}
}; 

// std::ostream& operator<<(std::ostream& ostr,const Exception* exc)
// {
//     ostr << &exc;make
//     return ostr;
// }

class typ1 : public Exception{
public:
virtual ~typ1() = default;
std::string imie() {return "1";}
};

class typ2 : public Exception{
public:
virtual ~typ2() = default;
std::string imie() {return "2";}
};

class typ3 : public Exception{
public:
virtual ~typ3() = default;
std::string imie() {return "3";}
};

class typ4 :public Exception{
public:
virtual ~typ4() = default;
std::string imie() {return "4";}
};

void Przetworz(Exception* exc)
{
 std::cout << "Przetworz wyjatek " << exc->imie() << " o adresie: " << exc << std::endl; 
 throw;
}
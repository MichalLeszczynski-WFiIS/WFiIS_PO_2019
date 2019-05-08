#pragma once
#include <iostream>

class Exception {
public:
virtual ~Exception() = default;
void PrzedstawSie() {std::cout << "Nazywam sie " << imie() << std::endl;}
virtual std::string imie() {return "noname";}
}; 

// std::ostream& operator<<(std::ostream& ostr,const Exception* exc)
// {
//     ostr << &exc;
//     return ostr;
// }

class ExceptType1 : public Exception{
public:
virtual ~ExceptType1() = default;
std::string imie() {return "Except1";}
};

class ExceptType2 : public Exception{
public:
virtual ~ExceptType2() = default;
std::string imie() {return "Except2";}
};

class ExceptType3 : public Exception{
public:
virtual ~ExceptType3() = default;
std::string imie() {return "Except3";}
};

class ExceptType4 : public Exception{
public:
virtual ~ExceptType4() = default;
std::string imie() {return "Except4";}
};

void HandleExcept(Exception* exc)
{
 std::cout << "Przetworz wyjatek " << exc->imie() << " o adresie: " << exc << std::endl; 
 throw dynamic_cast<ExceptType4*>(exc);
}
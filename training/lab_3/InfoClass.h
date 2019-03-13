#pragma once
#include <iostream>

class InfoClass {
public:
InfoClass(std::string name): _name(name) {
    std::cout<< "++ Tworze obiekt typu InfoClass: " << info()<< std::endl;
}
virtual ~InfoClass()
{
     std::cout<< "++ Usuwam obiekt typu InfoClass: " << info()<< std::endl;
}


virtual const std::string info() const {
    return "info = " + _name;
}

void info(const std::string& s) {
    _name = s;
}
std::string getName() const {return _name;}



private:
std::string _name;

};

class InfoSuperClass : public InfoClass{
public:
InfoSuperClass(std::string name, int number): InfoClass(name), _number(number) {}

virtual const std::string info() const {
    return "info = " + getName() + ", num = " + std::to_string(_number);
}

private:
int _number;
};
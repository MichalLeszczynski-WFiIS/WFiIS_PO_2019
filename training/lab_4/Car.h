#pragma once
#include <iostream>
#include <cstring>


class Car {
public:

virtual ~Car() {}
friend std::ostream & operator<<(std::ostream &ostr, const Car& car);
static Car* Create(std::string name);

 

virtual std::string TypeInfo()const=0;
virtual std::string ColorInfo()const=0;
virtual std::string EngineFuelInfo()const=0;
virtual std::string EngineCapInfo()const=0;
virtual std::string EnginePowInfo()const=0;
virtual std::string GpsInfo()const=0;
};


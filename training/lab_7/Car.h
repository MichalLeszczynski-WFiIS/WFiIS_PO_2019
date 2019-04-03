#pragma once
#include <iostream>
#include <cstring>
#include "GPS.h"
#include "Haversine.h"

class Car {
public:

explicit Car();
virtual ~Car();

friend std::ostream & operator<<(std::ostream &ostr, const Car& car);
static Car* Create(std::string name);

 

virtual std::string TypeInfo()const=0;
virtual std::string ColorInfo()const=0;
virtual std::string EngineFuelInfo()const=0;
virtual std::string EngineCapInfo()const=0;
virtual std::string EnginePowInfo()const=0;

virtual std::string GpsInfo() const;

virtual Coordinate& UpdateLocation(double longitude, double latitude);
virtual std::string GpsLocationInfo();


protected:
GPS *m_gps;

};


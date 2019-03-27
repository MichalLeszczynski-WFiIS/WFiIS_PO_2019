#pragma once
#include <iostream>
#include "Car.h"

class Mercedes: public Car {
public:
Mercedes() {}
virtual std::string TypeInfo() const override{return "Mercedes A";}

virtual std::string ColorInfo() const override{return "Red";}

virtual std::string EngineFuelInfo() const override{return "ON";}

virtual std::string EngineCapInfo() const override{return "1598 [cm^3]";}

virtual std::string EnginePowInfo() const override{return "65 [kW]";}

virtual std::string GpsInfo() const override {return "M/Garmin/No.000.000\n";}

};


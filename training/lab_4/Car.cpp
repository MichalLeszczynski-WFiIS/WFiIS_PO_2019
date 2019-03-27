#include "Mercedes.h"
#include "Ford.h"

Car* Car::Create(std::string name)
{
    if(name.compare("Ford"))
    {
        return new Ford();
    } 
    else
    {
        return new Mercedes();
    }
    
}


std::ostream & operator<<(std::ostream &ostr, const Car& car)
{
    ostr << "[INFO] Car:: Type " << car.TypeInfo() << std::endl;
    ostr << "[INFO] Car:: Color " << car.ColorInfo() << std::endl;
    ostr << "[INFO] Engine:: Fuel " << car.EngineFuelInfo() << std::endl;
    ostr << "[INFO] Engine:: Capacity " << car.EngineCapInfo() << std::endl;
    ostr << "[INFO] Power " << car.EnginePowInfo();
    return ostr;
}
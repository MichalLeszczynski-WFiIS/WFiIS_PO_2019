#include "Mercedes.h"
#include "Ford.h"



Car::Car()
{
    m_gps = new GPS;
}

Car::~Car()
{
    delete m_gps;
}

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

std::string Car::GpsInfo() const 
{
    return m_gps->GpsInfo();
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

Coordinate& Car::UpdateLocation(double longitude, double latitude)
{
    return *(m_gps->update_pos(Coordinate(longitude, latitude)));
}

std::string Car::GpsLocationInfo()
{
    float longi = m_gps->get_pos()->Longitude();
    float lati = m_gps->get_pos()->Latitude();

    return "Longitude: " + std::to_string(longi)  + "  Latitude: " + std::to_string(lati);
}
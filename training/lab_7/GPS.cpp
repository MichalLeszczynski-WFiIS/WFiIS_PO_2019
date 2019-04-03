#include "GPS.h"

GPS::GPS(std::string info): m_gps_info(info) , m_curr_pos(new Coordinate)
{

}

GPS::~GPS()
{
    delete m_curr_pos;
}

void GPS::set_Gps_info(std::string info)
{
    m_gps_info = info;
}

std::string GPS::GpsInfo()
{
    return m_gps_info;
}

Coordinate* GPS::update_pos(const Coordinate& new_coord)
{
    m_curr_pos->Longitude(new_coord.Longitude());
    m_curr_pos->Latitude(new_coord.Latitude());
    return m_curr_pos;
}

Coordinate* GPS::get_pos()
{
    return m_curr_pos;
}
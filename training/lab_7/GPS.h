#pragma once
#include <iostream>
#include "Haversine.h"

class GPS {
public:

GPS(std::string info = "no GPS");
~GPS();

void set_Gps_info(std::string info);
std::string GpsInfo();
Coordinate* update_pos(const Coordinate& new_coord);
Coordinate* get_pos();

private:
std::string m_gps_info;
Coordinate* m_curr_pos;
};

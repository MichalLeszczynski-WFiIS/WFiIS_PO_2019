#pragma once
#include <iostream>

/**
 * @brief virtual class representing a vehicle that can be used to move
 * 
 */
class Pojazd{
public:

    /**
     * @brief virtual destructor: Destroy the Pojazd object 
     * 
     */
    virtual ~Pojazd() = default;

    /**
     * @brief returns type of a vehicle
     * 
     * @return std::string 
     */
    virtual std::string type() const =0;

};

/**
 * @brief implements printing of Pojazd type objects
 * 
 * @param ostr 
 * @param poj Pojazd object to be printed
 * @return std::ostream& ostr made richer
 */
std::ostream& operator<<(std::ostream &ostr, const Pojazd& poj)
{
    ostr << poj.type();
    return ostr;
}






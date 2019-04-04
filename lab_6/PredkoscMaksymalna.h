#pragma once
#include <iostream>

/**
 * @brief class representing a velocity - it is a container for an integer
 * 
 */
class PredkoscMaksymalna {
public:

    /**
     * @brief Construct a new Predkosc Maksymalna object
     * 
     * @param predkosc - velocity contained
     */
    PredkoscMaksymalna(int predkosc): m_predkosc(predkosc) {}

    /**
     * @brief Destroy the Predkosc Maksymalna object
     * 
     */
    virtual ~PredkoscMaksymalna() = default;

    /**
     * @brief Get the predkosc object
     * 
     * @return std::string velocity contained
     */
    std::string get_predkosc() const {return std::to_string(m_predkosc);}

private:

    /**
    * @brief contained velocity
    * 
    */
    int m_predkosc;

};

/**
 * @brief implements printing of PredkoscMaksymalna type objects. Adds to ostream a "km/h" part
 * 
 * @param ostr 
 * @param predkosc PredkoscMaksymalna object to be printed
 * @return std::ostream& ostr made richer
 */
std::ostream& operator<<(std::ostream &ostr, const PredkoscMaksymalna& predkosc)
{
    ostr << predkosc.get_predkosc() << "km/h";
    return ostr;
}
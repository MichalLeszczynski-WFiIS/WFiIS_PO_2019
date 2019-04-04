#pragma once
#include "PojazdLadowy.h"
#include "PredkoscMaksymalna.h"

/**
 * @brief class representing a car - inherits from a PojazdLadowy
 * 
 */
class Samochod : public PojazdLadowy{
public:

    /**
     * @brief Construct a new Samochod object
     * 
     * @param v maximum velocity of the car
     */
    Samochod(const PredkoscMaksymalna& v): m_predkosc_maksymalna(v) {}

    /**
     * @brief Destroy the Samochod object
     * 
     */
    virtual ~Samochod() = default;
    
    /**
     * @brief ovveriden type function
     * 
     * @return std::string - type of that object
     */
    virtual std::string type() const override {return "Samochod";}

    /**
     * @brief returns value of maximum velocity of this object
     * 
     * @return PredkoscMaksymalna 
     */
    virtual PredkoscMaksymalna predkoscMaksymalna() const {return m_predkosc_maksymalna;}

private:

    /**
     * @brief maximum velocity
     * 
     */
    PredkoscMaksymalna m_predkosc_maksymalna;

};

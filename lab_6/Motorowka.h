#pragma once
#include "Pojazd.h"
#include "PredkoscMaksymalna.h"

/**
 * @brief class representing a vehicle that can swim - it has an engine too
 * 
 */
class Motorowka: virtual public Pojazd  {
public:

    /**
     * @brief Construct a new Motorowka object
     * 
     * @param v maximum velocity
     */
    Motorowka(const PredkoscMaksymalna& v): m_predkosc_maksymalna(v) {}

    /**
     * @brief Destroy the Motorowka object
     * 
     */
    virtual ~Motorowka() = default;

    /**
     * @brief ovveriden type function
     * 
     * @return std::string - type of that object
     */
    virtual std::string type() const override {return "Motorowka";}

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

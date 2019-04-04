#pragma once
#include "Pojazd.h"

/**
 * @brief class representing a vehicle that can be driven on the road
 * 
 */
class PojazdLadowy : virtual public Pojazd{
public:

    /**
     * @brief Construct a new Pojazd Ladowy object
     * 
     */
    PojazdLadowy() = default;

    /**
     * @brief Destroy the Pojazd Ladowy object
     * 
     */
    virtual ~PojazdLadowy() = default;

};

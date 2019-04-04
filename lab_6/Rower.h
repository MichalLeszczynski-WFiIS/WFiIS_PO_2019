
#pragma once
#include "PojazdLadowy.h"

/**
 * @brief class representing a bike - inherits from a PojazdLadowy
 * 
 */
class Rower: public PojazdLadowy {
public:

    /**
     * @brief Construct a new Rower object
     * 
     */
    Rower() = default;

    /**
     * @brief Destroy the Rower object
     * 
     */
    virtual ~Rower() = default;

    /**
     * @brief ovveriden type function
     * 
     * @return std::string - type of that object
     */
    virtual std::string type() const override {return "Rower";}

};
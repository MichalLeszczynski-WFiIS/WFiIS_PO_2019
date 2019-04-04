#pragma once
#include "Samochod.h"
#include "Motorowka.h"

/**
 * @brief class represents an Amphibia - strange vehicle that can swim as well as be driven on the road
 * 
 */
class Amfibia : public Samochod, public Motorowka{
public:

    /**
     * @brief Construct a new Amfibia object
     * 
     * @param v_1 max velocity on the land
     * @param v_2 max velocity on the water
     */
    Amfibia(const PredkoscMaksymalna& v_1, const PredkoscMaksymalna& v_2 ): Samochod(v_1), Motorowka(v_2) {}

    /**
     * @brief Destroy the Amfibia object
     * 
     */
    virtual ~Amfibia() = default;

    /**
     * @brief ovveriden type function
     * 
     * @return std::string - type of that object
     */
    virtual std::string type() const override {return "Amfibia";}

    /**
     * @brief maximum velocity on the land
     * 
     * @return PredkoscMaksymalna 
     */
    PredkoscMaksymalna predkoscMaksymalna_Lad() const {return Samochod::predkoscMaksymalna();}

    /**
     * @brief maximum velocity on the water
     * 
     * @return PredkoscMaksymalna 
     */
    PredkoscMaksymalna predkoscMaksymalna_Woda() const {return Motorowka::predkoscMaksymalna();}

};


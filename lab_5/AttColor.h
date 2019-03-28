#pragma once
#include <iostream>
/**
 * @brief container made to represent color 
 * 
 */
class AttColor {
public:
    /**
    * @brief enum containing possible colors 
    * 
    */
    enum Option {
        BLACK = 1,
        RED = 2,
        GREEN = 3,
        YELLOW = 4,
        BLUE = 5,
        MAGENTA = 6,
        CYAN = 7,
        GRAY = 8,
        WHITE = 9,
        RESET = 10
    };
    /**
    * @brief Construct a new Att Color object 
    * 
    * @param color 
    */
    AttColor(Option color): m_color(color) {}
    /**
    * @brief Destroy the Att Color object
    * 
    */
    virtual ~AttColor() {}
    /**
     * @brief Set the Color 
     * 
     * @param color to be set
     */
    virtual void setColor(Option color)
    {
        m_color = color;
    }
    /**
    * @brief Get the Color 
    * 
    * @return Option color returned
    */
    virtual Option getColor() const
    {
    return m_color;
    }

private:
    /**
     * @brief color contained 
     * 
     */
    Option m_color;

};

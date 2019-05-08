#pragma once
#include <iostream>

/**
 * @brief counter of depth of exceptions
 * 
 */
class LicznikPoziomow {
public:
    /**
     * @brief Construct a new Licznik Poziomow object and increment counter
     * 
     */
    LicznikPoziomow()
    {
        ++s_counter;
        std::cout<< "Rozpoczynamy poziom numer " << s_counter << "." << std::endl;
    }
    /**
     * @brief Destroy the Licznik Poziomow object and decrement counter
     * 
     */
    ~LicznikPoziomow()
    {
       
        std::cout<< "Konczymy poziom numer " << s_counter << "." << std::endl;
         --s_counter;
    }

private:
    /**
    * @brief static counter of current level
    * 
    */
    static int s_counter;

};


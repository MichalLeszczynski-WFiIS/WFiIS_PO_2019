#pragma once
#include <iostream>
#include <iomanip>
/**
 * @brief class printing argument with an enumeration
 * 
 */
class NicePrinter {
public:

    /**
     * @brief Construct a new Nice Printer object
     * 
     * @param max - defines width of text part responsible for enumeration
     */
    NicePrinter(int max)
    {
        s_max = max;
    }

    /**
     * @brief template function that prints argument with an enumeration
     * 
     * @tparam T type of argument printed
     * @param str argument to be printed
     */
    template <typename T> void operator()(T str) const
    {
            s_counter++;
            std::cout<< std::setw( s_max ) << s_counter << ": " << str << std::endl;
    }


private:

    /**
    * @brief counter of line that is written
    * 
    */
    static int s_counter;
    /**
     * @brief width of enumeraion space
     * 
     */
    static int s_max;

};


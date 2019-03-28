#pragma once
#include <iostream>
/**
 * @brief class representing object that can be printed
 * 
 */
class Printable {
public:
    /**
     * @brief Destroy the Printable object
     * 
     */
    virtual ~Printable() {}
    /**
     * @brief virtual function returninf std::string
     * 
     * @return std::string 
     */
    virtual std::string rawString() const = 0;

};

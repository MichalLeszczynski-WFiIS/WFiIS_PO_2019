#pragma once
#include <iostream>
#include <stdexcept>
#include "LicznikPoziomow.h"

/**
 * @brief class managing exceptions giving more information about them
 * 
 */
class Calc_error : public std::runtime_error {
public:
/**
 * @brief Construct a new Calc_error object
 * 
 * @param err next exception on the list
 * @param str exception info
 * @param name file name
 * @param line line of exception
 */
Calc_error(std::runtime_error* err,const std::string str,const std::string name ,const unsigned line ): std::runtime_error(str + ", [plik =  " + name + ", linia = " + std::to_string(line) + "]") ,m_err(err){}

/**
 * @brief Destroy the Calc_error object
 * 
 */
virtual ~Calc_error() {}

/**
 * @brief function managing all events with exceptions
 * 
 */
static void handler();

private: 
/**
 * @brief next exception in the list
 * 
 */
std::runtime_error* m_err;


};

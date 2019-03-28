#pragma once
#include <iostream>
#include <string>
#include "Printable.h"
#include "AttColor.h"
/**
 * @brief class representing printing line of signs
 * 
 */
class MyLine : public Printable, public AttColor {
public:
    /**
     * @brief Construct a new My Line object
     * 
     * @param sign to be multiplied
     * @param count number of signs
     * @param color of signs printed
     */
    MyLine(char sign, int count, AttColor::Option color):AttColor(color), m_sign(sign), m_count(count){} 
    /**
     * @brief returns string contained
     * 
     * @return std::string returned
     */
    virtual std::string rawString() const override
    {
        std::string tmp(m_count, m_sign);
        return tmp;
    }
    /**
     * @brief Set the Length object
     * 
     * @param len number of signs
     */
    void setLength(int len)
    {
        m_count = len;
    }
    /**
     * @brief Set the Char object
     * 
     * @param sign 
     */
    void setChar(char sign)
    {
        m_sign = sign;
    }

private:
    /**
     * @brief sign that will be multiplied
     * 
     */
    char m_sign;
    /**
     * @brief how many signs there will be
     * 
     */
    int m_count;

};

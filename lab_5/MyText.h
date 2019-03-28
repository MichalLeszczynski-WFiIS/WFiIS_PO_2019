#pragma once
#include <iostream>
#include "Printable.h"
#include "AttColor.h"
#include "AttFormat.h"
/**
 * @brief class representing text that can be printed
 * 
 */
class MyText : public Printable, public AttColor, public AttFormat{
public:
    /**
     * @brief Construct a new My Text object
     * 
     * @param str string contained
     * @param font formatting of printing
     * @param color color of printing
     */
    MyText(std::string str, AttFormat::Option font, AttColor::Option color):AttColor(color), AttFormat(font), m_str(str) {}
    /**
     * @brief Set the Text object
     * 
     * @param str text set
     */
    void setText(std::string str)
    {
        m_str = str;
    }
    /**
     * @brief returns bold text
     * 
     * @return std::string 
     */
    virtual std::string rawString() const override 
    {
        return m_str;
    }

private:
    /**
     * @brief string contained
     * 
     */
    std::string m_str;

};

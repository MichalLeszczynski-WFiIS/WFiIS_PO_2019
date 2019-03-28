#pragma once
#include <iostream>
/**
 * @brief Class representing text formatting 
 * 
 */
class AttFormat {
public:
    /**
     * @brief enum representing types of formatting
     * 
     */
    enum Option {
        BOLD = 1,
        DIM = 2,
        UNDERLINED = 3,
        RESET = 4
    };
    /**
     * @brief Construct a new Att Format object
     * 
     * @param font type of text formatting
     */
    AttFormat(Option font): m_font(font) {}
    /**
    * @brief Destroy the Att Format object
    * 
    */
    virtual ~AttFormat() {}
    /**
     * @brief Set the Format
     * 
     * @param formatto be set
     */
    virtual void setFormat(Option format )
    {
        m_font = format;
    }
    /**
     * @brief Get the Format
     * 
     * @return Option format returned
     */
    virtual Option getFormat() const
    {
    return m_font;
    }

private:
    /**
     * @brief font contained
     * 
     */
    Option m_font;
};

#pragma once

#include "Data.h"

/**
 * @brief visitable container for Int type
 * 
 */
class IntData : public Data {
public:
    /**
    * @brief Construct a new Int Data object
    * 
    * @param d initial value contained
    */
    IntData( int d );

    /**
    * @brief changes value of m_d 
    * 
    * @param d new value of type Int
    */
    void operator<<( int d );

    /**
    * @brief Get the Int object
    * 
    * @return Int - contained value
    */
    int getInt() const;

    /**
    * @brief interacts with visitor
    * 
    * @param v visitor that defines interaction type
    */
    virtual void acceptVisitor( Visitor& v) override;

private:
    /**
    * @brief contained value
    * 
    */
    int m_d;
    
};






/**
* @brief visitable container for Float type
* 
*/
class FloatData : public Data {
public:

    /**
    * @brief Construct a new Float Data object
    * 
    * @param d initial value contained
    */
    FloatData( float d );

    /**
    * @brief changes value of m_d 
    * 
    * @param d new value of type Float
    */
    void operator<<( float d );

    /**
    * @brief Get the Float object
    * 
    * @return float - contained value
    */
    float getFloat() const;

    /**
    * @brief interacts with visitor
    * 
    * @param v visitor that defines interaction type
    */
    virtual void acceptVisitor( Visitor& v) override;

private:

  /**
  * @brief contained value
  * 
  */
  float m_d; 

};

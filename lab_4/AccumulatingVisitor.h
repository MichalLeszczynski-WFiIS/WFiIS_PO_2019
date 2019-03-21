#pragma once
#include <iostream>
#include "Visitor.h"

/**
 * @brief class inheriting from Visitor that accumulates data visited
 * 
 */
class AccumulatingVisitor : public Visitor{
public:
    /**
    * @brief Construct a new Accumulating Visitor object and initialize its number counter with 0
    * 
    */
    AccumulatingVisitor(): m_suma(){}
    /**
    * @brief Visits data and adds its value to a general sum
    * 
    * @param data container of Int type
    */
    virtual void visit(IntData* data) override;
    /**
    * @brief Visits data and adds its value to a general sum
    * 
    * @param data container of Float type
    */
    virtual void visit(FloatData* data) override;
    /**
    * @brief Gets the Total Sum of visited objects 
    * 
    * @return float 
    */
    float getTotalSum() const;

private:
    /**
    * @brief member that contains sum of visited objects data
    * 
    */
    float m_suma;

};


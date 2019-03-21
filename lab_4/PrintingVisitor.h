#pragma once
#include <iostream>
#include "Visitor.h"
/**
 * @brief class inheriting from Visitor that prints data visited
 * 
 */
class PrintingVisitor : public Visitor {
public:
    /**
    * @brief visits data of Int type and prints it's value
    * 
    * @param data container of Int type
    */
    void visit(IntData* data) override;
    /**
    * @brief visits data of Float type and prints it's value
    * 
    * @param data container of Float type
    */
    void visit(FloatData* data) override;

};


#pragma once

class IntData;
class FloatData;

/**
 * @brief Abstract class representing object that can interact with data of Int and Float type
 * 
 */
class Visitor {
public:
    /**
    * @brief Interacts with Int data type
    * 
    * @param data container of Int type
    */
    virtual void visit(IntData* data) = 0;
    /**
    * @brief Interacts with Float data type
    * 
    * @param data container of Float type
    */
    virtual void visit(FloatData* data)  = 0;
};

#pragma once
#include <iostream>
class Visitor;


/**
 * @brief abstract class representing data that can be visited
 * 
 */
class Data {
public:
    /**
    * @brief virtual function that takes interaction with a Visitor depending on a Visitor type
    * 
    * @param v a visitor that reads data from that object  
    */
    virtual void acceptVisitor( Visitor& v) =0;

};

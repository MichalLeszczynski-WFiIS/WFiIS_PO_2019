#pragma once
#include <iostream>
#include "is_pod.h"
#include <string.h>

/**
 * @brief template of a helper class used to swap two objects of a complex type
 * 
 * @tparam T type that is not Plain old data
 * @tparam false 
 */
template<typename T, bool val = false>
class Swapper {
public:

    /**
     * @brief swaps two object using overloaded operator= 
     * 
     * @param a object of T type
     * @param b object of T type
     */
    static void swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};

/**
 * @brief template of a helper class used to swap two objects of a simple type that can be copied byte by byte 
 * 
 * @tparam T simple type
 */
template<typename T>
class Swapper<T, true> {
public:

    /**
     * @brief swaps two objects by copying bytes
     * 
     * @param a object of T type
     * @param b object of T type
     */
    static void swap(T& a,T& b)
    {
        unsigned size = sizeof(T);
        T temp;
        memcpy(&temp, &a, size) ;
        memcpy(&a, &b, size);
        memcpy(&b, &temp, size);
    }
};

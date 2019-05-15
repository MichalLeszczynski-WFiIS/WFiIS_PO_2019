#pragma once
#include <iostream>

/**
 * @brief class producing and containing values of a specified type
 * 
 */
class Factory {
public:

    /**
     * @brief Construct a new Factory object
     * 
     */
    Factory() {}

    /**
     * @brief template function saving a new value of a type T
     * 
     * @tparam T type of saved vlaue
     * @param value saved
     */
    template <typename T> void base(T value)
    {
        helper(true, value);
    }

    /**
     * @brief template function returning value saved by base(T value) function
     * 
     * @tparam T type of value stored and returned
     * @return T returns value
     */
     template <typename T> T product()
    {
        return helper(false, T{});
    }

    /**
     * @brief helper function providing communication between product() and base(T value) functions
     * 
     * @tparam T type of value proceeded
     * @param state defines if that function has to save or return a value
     * @return T value stored
     */
    template <typename T> T helper(bool state, T value)
    {
        static T s_container;
        if(state)
        {
           s_container = value;
        }
        return s_container;
    }
};

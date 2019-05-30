#pragma once
#include <iostream>

/**
 * @brief class defining if specified type is Plain old data or not
 * 
 * @tparam T 
 */
template<typename T>
struct is_pod {
    /**
     * @brief default value of type complexity
     * 
     */
    const static bool pod = false;
};

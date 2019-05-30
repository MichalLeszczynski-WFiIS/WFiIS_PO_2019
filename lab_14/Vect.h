#pragma once
#include <iostream>
#include "Swapper.h"

/**container for arrays that is capable of sorting them
 * @brief 
 * 
 * @tparam T 
 */
template<typename T>
class Vect {
public:

    /**
     * @brief Construct a new Vect object of type T and fixed size
     * 
     * @param size 
     */
    Vect(unsigned size): m_size(size)
    {
        m_array = new T[m_size];
    }

    /**
     * @brief Destroy the Vect object - free memory
     * 
     */
    ~Vect()
    {
        delete [] m_array;
    }

    /**
     * @brief const oveloaded [] operator that returns i 'th element of an array
     * 
     * @param i - index of element returned
     * @return T& - reference to object returned
     */
    T& operator[](unsigned i) const
    {
        return m_array[i];
    }

     /**
     * @brief oveloaded [] operator that returns i 'th element of an array
     * 
     * @param i - index of element returned
     * @return T& - reference to object returned
     */
    T& operator[](unsigned i)
    {
        return m_array[i];
    }

    /**
     * @brief returns size of an array contained
     * 
     * @return unsigned 
     */
    unsigned size() const
    {
        return m_size;
    }

    /**
     * @brief sorts an array in by using comparator using bubble sort algorithm
     * 
     * @param compare function returning value that allows us to compare objects
     */
    void buble_sort(bool (*compare)(const T& a, const T& b))
    {
        for (unsigned i = 0; i < m_size; i++ )
        {
            for (unsigned j = i+1; j < m_size; ++j ) 
            {
                if ( !compare(m_array[j], m_array[i]) )
                {
                    Swapper<T, is_pod<T>::pod>::swap( m_array[i], m_array[j] );
                }   
            }
        } 
    }


private:

    /**
     * @brief pointer to contained array
     * 
     */
    T* m_array;
    
    /**
     * @brief size of contained array 
     * 
     */
    unsigned m_size;

};

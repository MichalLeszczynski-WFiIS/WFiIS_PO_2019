#pragma once
#include <iostream>
#include "Swapping.h"
#include "is_pod.h"

template <typename T>
class Vect {
public:

    Vect(unsigned size): m_size(size)
    {
        m_array = new T[size];
    }

    ~Vect()
    {
        delete [] m_array;
    }

    T& operator[](unsigned i) const
    {
        return m_array[i];
    }

    T& operator[](unsigned i)
    {
        return m_array[i];
    }

    unsigned size() const
    {
        return m_size;
    }

    void buble_sort(bool (*porownanie)(const T& a, const T& b))
    {   
    for (unsigned i = 0; i < m_size; i++ )
    for (unsigned j = i+1; j < m_size; ++j ) 
        if (porownanie(m_array[j], m_array[i]) )
            SwapStruct<T, is_pod<T>::pod>::swap( &m_array[i], &m_array[j] );
    }

private:

    T* m_array;
    unsigned m_size;

};


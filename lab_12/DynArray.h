#pragma once
#include <iostream>

/**
 * @brief Template for container for dynamic array with fixed size 
 * 
 * @tparam T type contained inside of DynArray
 */
template <typename T>
class DynArray {
public:

    /**
     * @brief Construct a new Dyn Array object 
     * 
     * @param size - fixed amount of elements contained
     */
    DynArray(int size): m_size(size) 
    {
        m_tab = new T[m_size];
    }
    
    /**
     * @brief Construct a new Dyn Array object by copying from array
     * 
     * @param size - fixed amount of elements contained
     * @param array - container that has to be copied
     */
    DynArray(int size, const T* array): m_size(size) 
    {
        m_tab = new T[m_size];
        for(int i=0; i < m_size ; i ++ )
        {
            m_tab[i] = array[i];
        }
    }

    /**
     * @brief returns size of array - number of elements
     * 
     * @return int 
     */
    int size() const
    {
        return m_size;
    }

    /**
     * @brief overloaded operator []  
     * 
     * @param i - index of element returned
     * @return T& - reference to single element 
     */
    T& operator[](int i)
    {
        return m_tab[i];
    }

    /**
     * @brief class Iterator that gives interface to iterate over DynArray
     * 
     */
    class Iterator{
        public:

            /**
             * @brief Construct a new Iterator object 
             * 
             * @param obj - address of element we would like to point on
             */
            Iterator(T* obj)
            {
                m_obj = obj;
            }

            /**
             * @brief moves pointer to next element of an array
             * 
             */
            void operator++()
            {
                ++m_obj;
            }

            /**
             * @brief checks if two iterator objects are the same
             * 
             * @param it second argument 
             * @return true if are different
             * @return false if are same
             */
            bool operator!=(const Iterator& it)
            {
                return m_obj != it.m_obj;
            }

            /**
             * @brief dereference of a pointer
             * 
             * @return T - object that iterator is pointing to
             */
            T operator*()
            {
                return *m_obj;
            }

            /**
             * @brief returns pointer to object that Iterator is pointing at
             * 
             * @return T* - object returned
             */
            T* operator->(){return m_obj;}

        private:

            /**
             * @brief pointer of type T that is currently processed by Iterator
             * 
             */
            T* m_obj;
    };
    

    /**
     * @brief returns the Iterator of the pointer to the first element of DynArray
     * 
     * @return Iterator 
     */
    Iterator begin()
    {
        return Iterator(m_tab);
    }

    /**
     * @brief returns the Iterator to the pointer of address that is after last element of DynArray
     * 
     * @return Iterator 
     */
    Iterator end()
    {
        return Iterator(m_tab + m_size);
    }
    
private:

    /**
     * @brief Dynamicly allocated array of type T and size of m_size
     * 
     */
    T* m_tab;

    /**
     * @brief number of elements in DynArray
     * 
     */
    int m_size; 


};

/**
 * @brief template operator of << that prints DynArr.
 * 
 * @tparam T type of elements contained in DynArray
 * @param obj DynArray to be printed
 */
template <typename T>
std::ostream& operator<<(std::ostream& ostr, DynArray<T>& obj)
{
    ostr << "{";
    for(int i=0; i < obj.size() -1; i++)
    {
        ostr << "\"" << obj[i] << "\",";
    }
    ostr << "\"" << obj[obj.size() - 1] << "\"";
    ostr << "}";
    return ostr;
}
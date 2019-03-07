#pragma once
#include <iostream>
#include <cstring>
#include "Bit.h"
class BitArray {
public:
BitArray(int bitCount, bool forall = false): _bitCount(bitCount)
 {
     _tab = new unsigned char[(bitCount/8) +1 ];
     if(forall)
     {
        
     }
    
 }
~BitArray() 
{
    delete[] _tab;
}
BitArray(const BitArray& copied)
{
    _bitCount = copied._bitCount;
    _tab = new unsigned char[(copied._bitCount/8) +1 ];
    std::memcpy(_tab, copied._tab, _bitCount/8 + 1);
}

BitArray &operator=(const BitArray& copied)
{
     _bitCount = copied._bitCount;
    delete [] this->_tab;
    _tab = new unsigned char[(copied._bitCount/8) +1 ];
    std::memcpy(_tab, copied._tab, _bitCount/8 + 1);
    return *this;
}


Bit operator [](const int& position) const
{
    int whichBit = position/8;
    int whichPosition = position % 8;
    return Bit(whichPosition, &_tab[whichBit]);
}

void print() const
{
    for(int i=0; i< _bitCount + 1;i++)
    {
         if(i%8 == 0) std::cout<<" <-"<<i; 
 
    }

}


private:
int _bitCount;
unsigned char *_tab;

};

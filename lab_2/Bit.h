#include <iostream>



class Bit{
public:
    Bit(int position, unsigned char * Array): _positionInCell(position), _Array(Array) {}

    void operator=(bool value)
    {
        if(value)
        {
            *_Array |= (1 << _positionInCell);
        }
        else
        {
            *_Array &= ~(1 << _positionInCell);
        }
    }

    operator bool()
    {
        return *_Array << _positionInCell; 
    }

       


private:
int _positionInCell;
unsigned char * _Array;



};
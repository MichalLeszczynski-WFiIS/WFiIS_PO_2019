#include "ElData.h"
#include "Visitor.h"
//Int
IntData::IntData( int d ) : m_d( d ){}
void IntData::operator<<( int d )
{
    m_d = d; 
}

int IntData::getInt() const 
{ 
    return m_d; 
}

void IntData::acceptVisitor( Visitor& v) 
{ 
    v.visit( this ); 
}

//Float
FloatData::FloatData( float d ) : m_d( d ){}
void FloatData::operator<<( float d ) 
{
    m_d = d; 
}

float FloatData::getFloat() const 
{ 
    return m_d; 
}

void FloatData::acceptVisitor( Visitor& v) 
{ 
    v.visit( this ); 
};
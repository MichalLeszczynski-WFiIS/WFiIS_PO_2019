#include "AccumulatingVisitor.h"
#include "ElData.h"
void AccumulatingVisitor::visit(IntData* data)
{  
    m_suma += static_cast<float>(data->getInt());
}

void AccumulatingVisitor::visit(FloatData* data)
{
    m_suma += data->getFloat();
}

float AccumulatingVisitor::getTotalSum() const
{
    return m_suma;
}
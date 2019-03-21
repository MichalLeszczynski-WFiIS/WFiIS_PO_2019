#include "PrintingVisitor.h"
#include "ElData.h"


void PrintingVisitor::visit(IntData* data)
{
    std::cout << " " << data->getInt();
}

void PrintingVisitor::visit(FloatData* data)
{
     std::cout << " " << data->getFloat();
}
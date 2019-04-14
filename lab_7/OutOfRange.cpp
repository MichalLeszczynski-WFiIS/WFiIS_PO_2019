#include "Number.h"
#include "OutOfRange.h"


std::ostream& operator<<(std::ostream &ostr,const OutOfRange& exception)
{
    ostr << "Number named: " << exception.get_num().get_name();
    ostr << " has value " << exception.get_num().get_num();
    ostr << "which is outside of the allowed range: [" << Number::get_low() << ", " << Number::get_high() << std::endl;
      for(int i = 0; i < exception.get_count(); i++)
    {
        ostr<< "Destroying number" << exception.get_num().get_num() << std::endl;
        exception.clear(i);
    }
    return ostr;
}
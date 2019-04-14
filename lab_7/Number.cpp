
#include "Number.h"
#include "OutOfRange.h"

double Number::s_low = 0;
double Number::s_high = 0;
std::vector<Number*> Number::s_num_container {};

void Number::SetRange(double low, double high)
{ 
    s_low = low;
    s_high = high;
}

Number* Number::Factory(std::string name, double number)
{
    std::cout<< "Manufacturing number " << number << std::endl;

    Number *num = new Number(name, number);

    if(number > s_low && number < s_high)
    {
        s_num_container.push_back(num);
        return num;
    }
    else
    {
        delete num;
        throw OutOfRange(s_num_container, Number(name, number));
    }

}

double Number::get_low()
{
    return s_low;
}

double Number::get_high()
{
    return s_high;
}
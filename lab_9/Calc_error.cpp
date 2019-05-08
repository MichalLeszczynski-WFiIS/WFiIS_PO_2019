#include "Calc_error.h"

void Calc_error::handler()
{
    try
    {
        throw;
    }
    catch(std::runtime_error* wyjatek)
    {
        
        while(wyjatek)
        {
            std::cout << " -- z powodu: " ;
            std::cout << wyjatek->what() << std::endl;
            Calc_error* curr_exc = dynamic_cast<Calc_error*>(wyjatek);
            if(curr_exc)
            {
                wyjatek = curr_exc->m_err;
                delete curr_exc;
            }
            else
            {
                delete wyjatek;
                wyjatek = nullptr;
            }
            
        }
    }
}
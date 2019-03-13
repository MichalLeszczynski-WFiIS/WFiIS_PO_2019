#pragma once
#include <iostream>

class File {
public:
File(std::string name = "New File") : _name(name) {}
virtual ~File() {}
std::string getName() const {return _name;}
virtual std::ostream & print(std::ostream &ostr, int spaces) const 
{
    for(int i=0;i<spaces;i++)
    {
    ostr << " ";
    }
    ostr << getName()<<std::endl;
    return ostr;
}

private:
std::string _name;


};

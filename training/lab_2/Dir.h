#pragma once
#include <iostream>
#include "File.h"
#include <cstring>
class Dir: public File{
public:
Dir(std::string name = "New Directory"): File(name), _count(0) {
    _content[9] = new File("empty");
}
~Dir()
{
    std::cout<< "Deleting Dir: "<<getName() <<std::endl;
    for(int i=0;i<_count;i++)
    {
        std::cout<< "About to delete "<<_content[i]->getName() <<std::endl;
        delete _content[i];
    }
    delete _content[9];
}
void operator +=(File* file) 
{
    _content[_count] = file;
    _count++;
}
File* get(std::string name) const 
{
    
    for(int i=0;i<_count;i++)
    {
        if(!name.compare(_content[i]->getName()) ) 
        {
        return _content[i];
        }
    }
    return _content[9];
}
std::ostream & print(std::ostream &ostr, int spaces) const
{
    for(int i=0;i<spaces;i++)
    {
        ostr << " "; 
    }
    ostr << getName() << std::endl;
    for(int i=0;i<_count; i++)
    {
        
        _content[i]->print(ostr, spaces +2);
    }
    return ostr;
}

private:
File *_content[10];
int _count;
};

std::ostream &operator<<(std::ostream &ostr, const Dir& dir)
{
    dir.print(ostr, 0);
    return ostr;
}
std::ostream &operator<<(std::ostream &ostr, const File& dir) 
{
    dir.print(ostr, 0);
    return ostr;
}
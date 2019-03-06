#include <iostream>


int main(){

unsigned char a;

for(int i=0;i<20;i++)
{
    std::cout<< i << ": " << (unsigned char)i << std::endl;  
}

std::cout<< "Size of unsigned char: " << sizeof(a) << std::endl;



}
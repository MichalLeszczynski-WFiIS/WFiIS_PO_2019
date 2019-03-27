#pragma once
#include <iostream>
#include "MemoryController.h"
class Malenstwo {
public:
Malenstwo(int val =0): _val(val) 
{
    if(val != 0)
    std::cout<< "Konstrukcja Malenstwa: wart = "<< _val << std::endl;
}


int &wartosc() {return _val;}



void *operator new[](size_t size){
    std::cout << "Alokuje tablice [] o rozmiarze " << size / sizeof(Malenstwo)<< " (" << size <<  " bajtow)" << std::endl;
    MemoryController::counter += size/sizeof(Malenstwo);
    if( MemoryController::counter == 1){
        std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow" << std::endl;
         MemoryController::tab = ::new Malenstwo[100];
        return  MemoryController::tab;
    } else {
        return  MemoryController::tab +  MemoryController::counter - size/sizeof(Malenstwo);
    }
}

void* operator new(std::size_t size)
{
    std::cout<<"Alokuje jeden obiekt: 1 (" << size << " bajtow)"<<std::endl;

    MemoryController::counter++;
    if(MemoryController::counter==1)
    {
        std::cout<< "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow" <<std::endl;
       MemoryController::tab = ::new Malenstwo[100];
    }
    
    return  MemoryController::tab + MemoryController::counter -1;
} 


void operator delete[](void *objc, size_t size){
    std::cout << "Zwalniam tablice [] o rozmiarze " << size / sizeof(Malenstwo) << " (" << size << " bajtow)" << std::endl;
   MemoryController::counter -= size / sizeof(Malenstwo);
    if(MemoryController::counter == 0){
        ::delete[] MemoryController::tab;
    }
}


 void operator delete(void * p, std::size_t size) 
    { 
       std::cout<<"Zwalniam jeden obiekt: 1 (" << size << " bajtow)"<<std::endl;
        MemoryController::counter--;
         if(MemoryController::counter == 0){
        ::delete[] MemoryController::tab;
    }
    } 



private:
int _val;


};




class MalenstwoSamoSprzatacz{
    public:
        MalenstwoSamoSprzatacz(Malenstwo *mal): _mal(mal) {}
        ~MalenstwoSamoSprzatacz() {delete _mal;}

        Malenstwo *operator ->()
        {
            return _mal;
        }
    private:
        Malenstwo *_mal;
};


#pragma once
#include <iostream>
#include "Pomieszczenie.h"

template <void (Pomieszczenie::*fun)() const> void Lokaj(Pomieszczenie &room)
{
    (room.*fun)();
}

template <int> void Lokaj(Pomieszczenie &room)
    {
        std::cout<< "Nie robie nic" << std::endl;
    }


template <void (Pomieszczenie::*fun)() const> void Lokaj(const Pomieszczenie &room)
{
   std::cout << "Pomieszczenie " << room.get_name() << " jest zamkniete" << std::endl;
}
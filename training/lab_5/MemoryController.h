#include <iostream>
class Malenstwo;
class MemoryController{
public:

static Malenstwo* tab;
static int counter;


};

int MemoryController::counter = 0;
Malenstwo* MemoryController::tab = nullptr;
#pragma once
#include <iostream>
#include "InfoClass.h"
class InfoSmartPtr {
public:
InfoSmartPtr(InfoClass* infoclass): _ptr(infoclass) 
{
    _counter = new int;
    *(_counter) = 1;
}

 InfoSmartPtr(const InfoSmartPtr& isp) {
        copy(isp);
}

~InfoSmartPtr()
{
    del();
}
const InfoClass& operator*()
{
    return  *_ptr;
}
const InfoClass& operator*() const
{
    return  *_ptr;
}
InfoClass* operator->() const
{
    return this->getPtr();
}
InfoClass* getPtr() const 
{
    return _ptr;
}
int* getCounter() const 
{
    return _counter;
}

InfoClass* operator->() {
        return this->getPtr();
    }



InfoSmartPtr& operator=(const InfoSmartPtr& ic) {
    del();
    copy(ic);
    return *this;
}

void copy(const InfoSmartPtr& isp) {
    _ptr = isp.getPtr();
    _counter = isp.getCounter();
    (*_counter)++;
}

void del() {
    if (*_counter == 1) {
        delete _ptr;
        delete _counter;
    } else {
        (*_counter)--;
    }
}


private:
InfoClass* _ptr;
int* _counter;

};

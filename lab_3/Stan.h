#pragma once
#include <iostream>

#define STATE_TYPE(arg) class arg : public Stan


class Stan {
public:
virtual void operator()() =0;
virtual const char* nazwa() const =0;
	

private:


};


STATE_TYPE( ZbieranieDanych ) {
public:
ZbieranieDanych(std::string dana): m_dana(dana) {}

virtual const char* nazwa() const { 
		return "ZbieranieDanych";
	}

virtual void operator()() {
		std::cout << "Prosze podac dana: " << m_dana <<"= ?, podano";
		// std::cint >> adres;    ----->     adres = "Nowak@mail.com";
       std::string adres = "Nowak@mail.com";
        std::cout << " \'"<<adres << "\'" <<std::endl;
        
	}


private:
std::string m_dana;


};

STATE_TYPE( Podsumowanie ) {
public:

virtual const char* nazwa() const { 
		return "Podsumowanie";
	}

virtual void operator()() {
		std::cout << "Podsumowanie" <<std::endl;
	}



};
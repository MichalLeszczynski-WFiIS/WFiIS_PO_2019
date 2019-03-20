#pragma once
#include <iostream>
#define STATE_TYPE(arg) class arg : public Stan


class MaszynaStanow;

class Stan {
public:
virtual ~Stan() {}
virtual void operator()() =0;
virtual const char* nazwa() const =0;
virtual void podsumowanie() const{
	return;
}


MaszynaStanow * maszyna = nullptr;
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
       m_adres = "Nowak@mail.com";
        std::cout << " \'"<<m_adres << "\'" <<std::endl;
        
	}

virtual void podsumowanie() const {
		std::cout<<"* "<<m_dana << m_adres<<std::endl;
	}
std::string getAddres()
{
	return m_adres;
}


private:
std::string m_dana;
std::string m_adres;

};

STATE_TYPE( Podsumowanie ) {
public:

virtual const char* nazwa() const override{ 
		return "Podsumowanie";
	}

virtual void operator()() override;

virtual void podsumowanie() const override{
		return;
	}


}; 
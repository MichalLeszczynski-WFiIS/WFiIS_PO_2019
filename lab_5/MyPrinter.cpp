#include "MyPrinter.h"
#include "MyText.h"
#include "MyLine.h"
#include <iostream>
#include <cstring>
MyPrinter::MyPrinter(unsigned int width)
	: m_width(width) 
{

}

////////////////////////////////////////////////////////////////////////
//  Jedyna metoda klasy MyPrinter ktora powinni Panstwo modyfikowac.  //
////////////////////////////////////////////////////////////////////////
void MyPrinter::print( const Printable & obj ) const
{
	const AttFormat* ptrf = dynamic_cast<const AttFormat*>(&obj);
	if(ptrf)
		std::cout << MyPrinter::controlSeq( ptrf->getFormat());

	const AttColor* ptrc = dynamic_cast<const AttColor*>(&obj);
	if(ptrc)
		std::cout << MyPrinter::controlSeq( ptrc->getColor()); 
	int tmp = (m_width - obj.rawString().size())/2; 
	std::string tmp_str(tmp,' ');
	std::cout << tmp_str << obj.rawString() << std::endl;
}

////////////////////////////////////////////////////////////////////////
///                                                                  ///
///          ANSI/VT100 TERMINAL OUTPUT CONTROL SEQUENCES            ///
///                                                                  ///
////////////////////////////////////////////////////////////////////////

const char * MyPrinter::resetSeq()
{
	return "\e[0m";
}

// formats: BOLD, DIM, UNDERLINED, RESET
const char * MyPrinter::controlSeq( AttFormat::Option opt )
{
	switch(opt)
	{
		case AttFormat::BOLD :
			return "\e[1m";
		case AttFormat::DIM :
			return "\e[2m";
		case AttFormat::UNDERLINED :
			return "\e[4m";
		default:
			return MyPrinter::resetSeq();
	}
}

// colors: BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, GRAY, WHITE, RESET
const char * MyPrinter::controlSeq( AttColor::Option opt )
{
	switch(opt)
	{
		case AttColor::BLACK :
			return "\e[30m";
		case AttColor::RED :
			return "\e[31m";
		case AttColor::GREEN :
			return "\e[32m";
		case AttColor::YELLOW :
			return "\e[33m";
		case AttColor::BLUE :
			return "\e[34m";
		case AttColor::MAGENTA :
			return "\e[35m";
		case AttColor::CYAN :
			return "\e[36m";
		case AttColor::GRAY :
			return "\e[90m";
		case AttColor::WHITE  :
			return "\e[97m";
		default:
			return MyPrinter::resetSeq();
	}
}


/*
 Celem zadania jest przeÄ‡wiczenie dziedziczenia. 
 Stworzymy hierarchiÄ™ klas reprezentujÄ…cych obiekty graficzne.
 Opcjonalnie da siÄ™ pokolorowaÄ‡ ich wnÄ™trze i obwĂłdkÄ™.

 Wymagania:
 -- proszÄ™ wykorzystaÄ‡ konstruktor delegujÄ…cy w klasie Rectangle 
 -- proszÄ™ nie powielaÄ‡ tego samego kodu 

 ProszÄ™ takĹĽe uĹĽywaÄ‡ specyfikatora override

 Zadanie nie jest dokĹ‚adnym rozszerzeniem programu sprzed tygodnia, ale moĹĽna 
 wykorzystaÄ‡ czÄ™Ĺ›Ä‡ kodu (bez klas Drawable, Transformable i PointsArray).


 ProszÄ™ nie modyfikowaÄ‡ pliku z funkcjÄ… main.

 Ostateczny program powinien byÄ‡ przyjazny dla programisty (mieÄ‡
 czytelny i dobrze napisany kod).

 Przy wykonaniu zadania nie wolno korzystaÄ‡ z internetu, notatek ani ĹĽadnych 
 innych materiaĹ‚Ăłw (w tym wĹ‚asnych wczeĹ›niej przygotowanych plikĂłw oprocz makefile)

 Program proszÄ™ kompilowaÄ‡ przynajmniej z flaga -Wall -g oraz -std=c++11 
 Makefile powinien zawieraÄ‡ rĂłwnieĹĽ cel "clean", ktĂłry usuwa pliki
 obiektowe i plik wykonywalny.
 */

#include <iostream>
#include "Shape.h"
#include "Circle.h" 
#include "Rectangle.h"
#include "ColorFilledShape.h"
#include "ColorBorderShape.h"

int main() {
	Circle circle(2); // kolo o promieniu 2 
	Rectangle square(5); // prostokat o bokach 5,5
	Rectangle *rect = new Rectangle(2,3);  // prostokat o bokach 2,3

	Shape *obj = &circle;
	obj->draw();

	obj=rect;
	obj->draw(); 
 
	obj=&square;
	obj->draw();
	obj->scale(3.0);
	obj->draw();
	
	square*=3.0;
	square.draw();

	std::cout << "====== Colored shapes ======" << std::endl;

	ColoredShape *filledRectangle = new ColorFilledShape(rect);
	filledRectangle->draw();

	filledRectangle->setColor(Colors::RED); 
	filledRectangle->draw();
	
	ColoredShape *blueBorderRectangle = new ColorBorderShape(filledRectangle);
	blueBorderRectangle->setColor(Colors::BLUE);
	blueBorderRectangle->draw();

	std::cout << "====== Changed size ======" << std::endl;
	rect->scale(0.5);
	blueBorderRectangle->draw();

	std::cout << "====== Changed colors ======" << std::endl;

	filledRectangle->setColor(Colors::GREEN);
	blueBorderRectangle->draw();
	delete blueBorderRectangle;
}


/* wynik 

Circle with radius 2
Rectangle with sides 2, 3
Rectangle with sides 5, 5
Rectangle with sides 15, 15
Rectangle with sides 45, 45
====== Colored shapes ======
Rectangle with sides 2, 3
 -- with white filling
Rectangle with sides 2, 3
 -- with red filling
Rectangle with sides 2, 3
 -- with red filling
 -- with blue border 
====== Changed size ======
Rectangle with sides 1, 1.5
 -- with red filling
 -- with blue border 
====== Changed colors ======
Rectangle with sides 1, 1.5
 -- with green filling
 -- with blue border 


 */

#include "Square.h"

#include <iostream>

Square::Square(double side)
	: side(side)
{

}

double Square::calculateArea()
{
	real32 area = side * side;
	return area;
}

void Square::print()
{
	std::cout << "(Square) " << side << " " << calculateArea() << std::endl;
}

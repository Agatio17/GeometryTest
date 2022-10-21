#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(real32 width, real32 height)
	: width(width), height(height)
{

}

real32 Rectangle::calculateArea()
{
	real32 area = width * height;
	return area;
}

void Rectangle::print()
{
	std::cout << "(Rectangle) " << width << " " << height << " " << calculateArea() << std::endl;
}

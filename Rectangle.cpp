#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(double width, double height)
	: width(width), height(height)
{

}

double Rectangle::calculateArea()
{
	real32 area = width * height;
	return area;
}

void Rectangle::print()
{
	std::cout << "(Rectangle) " << width << " " << height << " " << calculateArea() << std::endl;
}

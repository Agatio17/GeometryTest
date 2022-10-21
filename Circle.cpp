#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

Circle::Circle(real32 radius)
	: radius(radius)
{

}

real32 Circle::calculateArea()
{
	real32 area = M_PI * radius * radius;
	return area;
}

void Circle::print()
{
	std::cout << "(Circle) " << radius << " " << calculateArea() << std::endl;
}

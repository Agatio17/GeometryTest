#include "Circle.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

Circle::Circle(double radius)
	: radius(radius)
{

}

double Circle::calculateArea()
{
	double area = M_PI * radius * radius;
	return area;
}

void Circle::print()
{
	std::cout << "(Circle) " << radius << " " << calculateArea() << std::endl;
}

#pragma once

#include "Definitions.h"
#include "Geometry.h"

class Rectangle : public Geometry
{
public:
	Rectangle(double width, double height);

	double calculateArea() override;
	void print() override;

private:
	double width;
	double height;
};


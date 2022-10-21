#pragma once

#include "Definitions.h"
#include "Geometry.h"

class Circle : public Geometry
{
public:
	Circle(double radius);

	double calculateArea() override;
	void print() override;

private:
	double radius;
};
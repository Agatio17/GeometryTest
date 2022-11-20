#pragma once

#include "Definitions.h"
#include "Geometry.h"

class Square : public Geometry
{
public:
	Square(double side);

	double calculateArea() override;
	void print() override;

private:
	double side;
};


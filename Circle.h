#pragma once

#include "Definitions.h"
#include "Geometry.h"

class Circle : public Geometry
{
public:
	Circle(real32 radius);

	real32 calculateArea() override;
	void print() override;

private:
	real32 radius;
};
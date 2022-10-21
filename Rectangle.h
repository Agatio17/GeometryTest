#pragma once

#include "Definitions.h"
#include "Geometry.h"

class Rectangle : public Geometry
{
public:
	Rectangle(real32 width, real32 height);

	real32 calculateArea() override;
	void print() override;

private:
	real32 width;
	real32 height;
};


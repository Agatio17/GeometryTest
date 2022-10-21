#include <iostream>
#include <vector>

#include "Rectangle.h"
#include "Circle.h"


int main()
{
	std::cout << "Test" << std::endl;
	
	std::vector<Geometry*> geometries;
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			geometries.push_back(new Rectangle((real32)i, (real32)i));
		} else {
			geometries.push_back(new Circle((real32)i));
		}
	}

	for (int i = 0; i < geometries.size(); i++) {
		geometries[i]->print();
	}

	return 0;
}
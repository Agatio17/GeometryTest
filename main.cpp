#include <iostream>
#include <vector>

#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"


int main()
{
	std::cout << "Test" << std::endl;
	
	std::vector<Geometry*> geometries;
	int nRects = 0;
	int nCircles = 0;
  int nSquares = 0;
	for (int i = 0; i < 100; i++) {
		int r = (i % 3);
		if (r == 0) {
			geometries.push_back(new Rectangle((real32)i, (real32)i));
			nRects++;
		} else if(r == 1) {
			geometries.push_back(new Circle((real32)i));
			nCircles++;
		} else if(r == 2) {
			geometries.push_back(new Square((real32)i));
      nSquares++;
		}
	}

	for (int i = 0; i < geometries.size(); i++) {
		geometries[i]->print();
	}

	return 0;
}
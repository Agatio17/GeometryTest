#include <iostream>

#include "Rectangle.h"

int main()
{
	std::cout << "Test" << std::endl;
	
	Rectangle rect(100, 200);
	rect.print();
	std::cout << rect.calculateArea();

	return 0;
}
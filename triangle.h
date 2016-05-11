#ifndef TRIANGLE.H
#define TRIANGLE.H
#include "rectangle.h"

class Triangle : public Rectangle{
	public:
	Triangle(int h, int b) : Rectangle("Triangle", h, b){}
	Triangle() : Rectangle("Triangle"){}
	int area();
};

int Triangle::area();

#endif
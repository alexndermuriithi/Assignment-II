#ifndef SQUARE.H
#define SQUARE.H
#include "rectangle.h"

class Square : public Rectangle{
	public:
	Square(int side);
};
Square::Square(int side) : Rectangle("Square", side, side){}
#endif
#ifndef RECTANGLE.H
#define RECTANGLE.H
#include <string>

class Rectangle{
	std::string shape;
	int height, width;
	public:
	Rectangle(std::string shape="Rectange"): shape(shape), height(0), width(0){}
	Rectangle(int h, int w): height(h), width(w){}
	Rectangle(std::string shape, int h, int w): height(h), width(w){}
	
	std::string getName();
	int area();
}
#endif
#ifndef DRIVER.H
#define DRIVER.H

#include <string>

class Driver{
	std::string jina;
	public:
	Driver(std::string name = "Dereva"): jina(name){}
	std::string getName();
};
#endif
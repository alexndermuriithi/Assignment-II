#ifndef CAR.H
#define CAR.H

#include <string>

class SteeringWheel{
};

class Car{
	Driver *dere;
	SteeringWheel s_wheel;
	std::string car_type;
	public:
	Car(Driver *driver = NULL, std::string ct):dere(driver), car_type(ct){}
	Car(Driver *driver = NULL) : Car(driver, "Mercedes") {}
	std::string whosDriving();
};
#endif
#include "Plane.h"
void Plane::setEngine(int e)
{
	engine = e;
}
void Plane::setFlightrange(int fr)
{
	flightrange = fr;
}
void Plane::setLenrunway(int lr)
{
	lenrunway = lr;
}

int Plane::getEngine()
{
	return engine;
}
int Plane::getFlightrange()
{
	return flightrange;
}
int Plane::getLenrunway()
{
	return lenrunway;
}
string Plane::get_infa()
{
	return Vehicle::get_infa() + "\t кількість двигунів : " + to_string(engine) + " дальність польоту : " + to_string(flightrange) + "потрібна довжина взлітної смуги : " + to_string(lenrunway);
}

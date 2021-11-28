#include "Vehicle.h"
void Vehicle::setPasagyry(int p)
{
	pasagyry = p;
}
void Vehicle::setSpeed(int s)
{
	speed = s;
}
void Vehicle::setFuel(float f)
{
	fuel = f;
}

int Vehicle::getPasagyry()
{
	return pasagyry;
}
int Vehicle::getSpeed()
{
	return speed;
}
float Vehicle::getFuel()
{
	return fuel;
}
string Vehicle::get_infa()
{
	return "Кількість пасажирів " + to_string(pasagyry) + " максимальна швидкість " + to_string(speed) + " максимальна к-сть палива " + to_string(fuel);
}

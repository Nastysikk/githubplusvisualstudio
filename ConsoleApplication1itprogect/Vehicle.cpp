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
void Vehicle::setRun(int r)
{
	run = r;
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
int Vehicle::getRun()
{
	return run;
}
string Vehicle::get_infa()
{
	return "ʳ������ �������� " + to_string(pasagyry) + " ����������� �������� " + to_string(speed) + " ����������� �-��� ������ " + to_string(fuel);
}

#include "Van.h"
void Van::setKuzov(string k)
{
	kuzov = k;
}
void Van::setCargo(string cg)
{
	cargo = cg;
}
string Van::getKuzov()
{
	return kuzov;
}
string Van::getCargo()
{
	return cargo;
}
string Van::get_infa()
{
	return Vehicle::get_infa() + "\t тип кузову : " + kuzov + " вантажність : " + cargo;
}

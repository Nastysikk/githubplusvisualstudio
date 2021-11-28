#include "Steamer.h"
void Steamer::setType(string tp)
{
	type = tp;
}
string Steamer::getType()
{
	return type;
}

string Steamer::get_infa()
{
	return Vehicle::get_infa() + "\t тип вантажівки : " + type;
}

#include "Auto.h"
void Auto::setMistkist(int mzm)
{
	mistkist = mzm;
}

int Auto::getMistkist()
{
	return mistkist;
}
string Auto::get_infa()
{
	return Vehicle::get_infa() + "\t вантажомісткість  : " + to_string(mistkist);
}

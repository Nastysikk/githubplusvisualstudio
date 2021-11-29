#pragma once
#include "Vehicle.h"
class Plane : public Vehicle
{
private:
	int engine;			//к-сть двигунів
	int flightrange;	//дальність польоту
	int lenrunway;		//потрібна довжина злітної смуги
	int engineThrust;   //тяга двигуна
public:
	Plane()
	{
		engine = 0;
		flightrange = 0;
		lenrunway = 0;
		engineThrust = 0;
	}
	Plane(int e, int fr, int lr, int et)
	{
		engine = e;
		flightrange = fr;
		lenrunway = lr;
		engineThrust = et;
	}
	~Plane() {}
	void setEngine(int e);
	void setFlightrange(int fr);
	void setLenrunway(int lr);

	int getEngine();
	int getFlightrange();
	int getLenrunway();
	string get_infa();
	friend istream& operator>> (istream& in, Plane& temp)
	{
		Vehicle* v = &temp;
		operator>>(in, *v); //явно викликаємо оператор вводу(баз клас)
		cout << "Введіть  к-сть двигунів";
		in >> temp.engine;
		cout << "Введіть  дальність польоту";
		in >> temp.flightrange;
		cout << "Введіть  довжину злітної смуги";
		in >> temp.lenrunway;
		in.clear(); in.ignore(255, '\n');
		return in;
	}
};

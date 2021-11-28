#pragma once
#include "Vehicle.h"
class Auto : public Vehicle
{
private:
	int mistkist;	// вантажомісткість у м куб.
public:
	Auto()
	{
		mistkist = 0;
	}
	Auto(int mzm)
	{
		mistkist = mzm;
	}
	~Auto() {}

	void setMistkist(int mzm);
	int getMistkist();
	string get_infa();
	friend istream& operator>> (istream& in, Auto& temp)//перевантаження оператора  вводу,(зліва посилання на об'єкт класу istream,клас для якого хочемо перевантажити оператор)
	{
		Vehicle* v = &temp;
		operator>>(in, *v); //явно викликаємо оператор вводу(баз клас)
		cout << "Введіть  вантажомісткість у м куб.";
		in >> temp.mistkist;
		in.clear(); in.ignore(255, '\n');
		return in;
	}

};

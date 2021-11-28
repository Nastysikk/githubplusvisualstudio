#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int pasagyry;
	int speed;
	float fuel; //максимальна к-сть палива,€ку вм≥щуЇ зас≥б
	int run; //проб≥г автомоб≥л€
	int t;
public:
	Vehicle()
	{
		pasagyry = 0;
		speed = 0;
		fuel = 0;
		run = 0;
		
	}
	Vehicle(int p, int s, float f, int r)
	{
		pasagyry = p;
		speed = s;
		fuel = f;
		run = r;
	}

	~Vehicle() {}

	void setPasagyry(int p);
	void setSpeed(int s);
	void setFuel(float f);

	int getPasagyry();
	int getSpeed();
	float getFuel();
	string get_infa();
	friend istream& operator>> (istream& in, Vehicle& temp)//перевантаженн€ оператора  вводу,(зл≥ва посиланн€ на об'Їкт класу istream,клас дл€ €кого хочемо перевантажити оператор)
	{
		in.clear(); in.ignore(255, '\n');
		cout << "¬вед≥ть к≥льк≥сть пасажир≥в ";
		in >> temp.pasagyry;
		cout << "¬вед≥ть максимальну швидк≥сть ";
		in >> temp.speed;
		cout << "¬вед≥ть максимальна к - сть палива  ";
		in >> temp.fuel;
		in.clear(); in.ignore(255, '\n');
		return in;
	}
};



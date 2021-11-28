#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int pasagyry;
	int speed;
	float fuel; //����������� �-��� ������,��� ���� ����
public:
	Vehicle()
	{
		pasagyry = 0;
		speed = 0;
		fuel = 0;
	}
	Vehicle(int p, int s, float f)
	{
		pasagyry = p;
		speed = s;
		fuel = f;
	}

	~Vehicle() {}

	void setPasagyry(int p);
	void setSpeed(int s);
	void setFuel(float f);

	int getPasagyry();
	int getSpeed();
	float getFuel();
	string get_infa();
	friend istream& operator>> (istream& in, Vehicle& temp)//�������������� ���������  �����,(���� ��������� �� ��'��� ����� istream,���� ��� ����� ������ ������������� ��������)
	{
		in.clear(); in.ignore(255, '\n');
		cout << "������ ������� �������� ";
		in >> temp.pasagyry;
		cout << "������ ����������� �������� ";
		in >> temp.speed;
		cout << "������ ����������� � - ��� ������  ";
		in >> temp.fuel;
		in.clear(); in.ignore(255, '\n');
		return in;
	}
};



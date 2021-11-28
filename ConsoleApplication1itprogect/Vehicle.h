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
	int run; //����� ���������
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



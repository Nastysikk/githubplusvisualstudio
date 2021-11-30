#pragma once
#include "Vehicle.h"
#include<string>
using namespace std;
class Steamer : public Vehicle
{
private:
	string type; //��� (��������� �� ������������ ��������)
	int mass;
public:
	Steamer()
	{
		type = "�����";
		mass = 0;
	}
	Steamer(string tp, int m)
	{
		type = tp;
		mass = m;
	}
	~Steamer() {}
	void setType(string tp);
	string getType();
	string get_infa();
	friend istream& operator>> (istream& in, Steamer& temp)
	{
		Vehicle* v = &temp;
		operator>>(in, *v);  //���� ��������� �������� �����(��� ����)
		cout << "������  ��� ���������";
		in >> temp.type;
		in.clear(); in.ignore(255, '\n');
		return in;
	}
};

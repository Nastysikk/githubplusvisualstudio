#pragma once
#include "Vehicle.h"
class Auto : public Vehicle
{
private:
	int mistkist;	// �������������� � � ���.
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
	friend istream& operator>> (istream& in, Auto& temp)//�������������� ���������  �����,(���� ��������� �� ��'��� ����� istream,���� ��� ����� ������ ������������� ��������)
	{
		Vehicle* v = &temp;
		operator>>(in, *v); //���� ��������� �������� �����(��� ����)
		cout << "������  �������������� � � ���.";
		in >> temp.mistkist;
		in.clear(); in.ignore(255, '\n');
		return in;
	}

};

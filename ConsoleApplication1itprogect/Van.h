#pragma once
#include<string>
#include "Vehicle.h"
using namespace std;
class Van : public Vehicle
{
private:
	string kuzov; //��� ������
	string cargo; //��� ����������
public:
	Van()
	{
		kuzov = "�����";
		cargo = "�����";
	}
	Van(string k, string cg)
	{
		kuzov = k;
		cargo = cg;
	}
	~Van() {}
	void setKuzov(string k);
	void setCargo(string cg);
	string getKuzov();
	string getCargo();
	string get_infa();
	friend istream& operator>> (istream& in, Van& temp)
	{
		Vehicle* v = &temp;
		operator>>(in, *v); //���� ��������� �������� �����(��� ����)
		cout << "������  ��� ������";
		in >> temp.kuzov;
		cout << "������ ���������� ";
		in >> temp.cargo;
		in.clear(); in.ignore(255, '\n');
		return in;
	}

};

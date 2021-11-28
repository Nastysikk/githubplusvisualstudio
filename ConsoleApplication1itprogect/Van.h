#pragma once
#include<string>
#include "Vehicle.h"
using namespace std;
class Van : public Vehicle
{
private:
	string kuzov; //тип кузову
	string cargo; //€ка вантажн≥сть
public:
	Van()
	{
		kuzov = "ѕусто";
		cargo = "ѕусто";
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
		operator>>(in, *v); //€вно викликаЇмо оператор вводу(баз клас)
		cout << "¬вед≥ть  тип кузову";
		in >> temp.kuzov;
		cout << "¬вед≥ть вантажн≥сть ";
		in >> temp.cargo;
		in.clear(); in.ignore(255, '\n');
		return in;
	}

};

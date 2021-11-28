#pragma once
#include "Vehicle.h"
#include<string>
using namespace std;
class Steamer : public Vehicle
{
private:
	string type; //тип (вантажний чи пасажирський пароплав)
public:
	Steamer()
	{
		type = "ѕусто";
	}
	Steamer(string tp)
	{
		type = tp;
	}
	~Steamer() {}
	void setType(string tp);
	string getType();
	string get_infa();
	friend istream& operator>> (istream& in, Steamer& temp)
	{
		Vehicle* v = &temp;
		operator>>(in, *v);  //€вно викликаЇмо оператор вводу(баз клас)
		cout << "¬вед≥ть  тип вантаж≥вки";
		in >> temp.type;
		in.clear(); in.ignore(255, '\n');
		return in;
	}
};

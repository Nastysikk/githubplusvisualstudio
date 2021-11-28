#include <Windows.h>
#include <fstream>
#include <vector>
#include "Auto.h"
#include "Plane.h"
#include "Steamer.h"
#include "Van.h"


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ofstream in;
	ifstream out;
	string path = "Test.txt";
	Van v;
	Vehicle veh;
	Steamer s;
	Plane p;
	Auto a;
	int  choice;
	while (true)
	{
		cout << "Меню: " << endl;
		cout << "1. Добавити вантажівку 2. Добавити транспортний засіб  3. Добавити літак 4. Добавити пароплав 5. Добавити авто " << endl;
		cin.clear();
		cin >> choice;
		if (choice >= 0 && choice <= 6)
		{
			switch (choice)
			{
			case 1:
				cin >> v;
				in.open(path, ofstream::app);//(path,app)  добавить нові записи до старих 
				if (!in.is_open())
				{
					cout << "Помилка відкриття файла" << endl;
				}
				else
				{
					in << v.get_infa() + "\n";
				}
				in.close(); break;
			case 2:
				cin >> veh;
				in.open(path, ofstream::app);//відкриває файл і видаляє все що в ньому  app  добавить нові записи до старих 
				if (!in.is_open())
				{
					cout << "Помилка відкриття файла" << endl;
				}
				else
				{
					in << veh.get_infa() + "\n";
				}
				in.close(); break;
			case 3:
				cin >> p;
				in.open(path, ofstream::app);//(path) відкриває файл і видаляє все що в ньому  (path,app)  добавить нові записи до старих 
				if (!in.is_open())
				{
					cout << "Помилка відкриття файла" << endl;
				}
				else
				{
					in << p.get_infa() + "\n";
				}
				in.close(); break;
			case 4:
				cin >> s;
				in.open(path, ofstream::app);
				if (!in.is_open())
				{
					cout << "Помилка відкриття файла" << endl;
				}
				else
				{
					in << s.get_infa() + "\n";
				}
				in.close();
				break;
			case 5:
				cin >> a;
				in.open(path, ofstream::app);
				if (!in.is_open())
				{
					cout << "Помилка відкриття файла" << endl;
				}
				else
				{
					in << a.get_infa() + "\n";
				}
				in.close();
				break;
			}
		}
		else
		{
			cout << "\n\tНЕКОРЕКТНИЙ ВВIД! Очiкується число від 1 до 4. Будь ласка повторіть ввід ";
		}
	}
	return 0;
}

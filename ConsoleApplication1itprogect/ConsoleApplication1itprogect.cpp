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
		cout << "����: " << endl;
		cout << "1. �������� ��������� 2. �������� ������������ ����  3. �������� ���� 4. �������� �������� 5. �������� ���� " << endl;
		cin.clear();
		cin >> choice;
		if (choice >= 0 && choice <= 6)
		{
			switch (choice)
			{
			case 1:
				cin >> v;
				in.open(path, ofstream::app);//(path,app)  �������� ��� ������ �� ������ 
				if (!in.is_open())
				{
					cout << "������� �������� �����" << endl;
				}
				else
				{
					in << v.get_infa() + "\n";
				}
				in.close(); break;
			case 2:
				cin >> veh;
				in.open(path, ofstream::app);//������� ���� � ������� ��� �� � �����  app  �������� ��� ������ �� ������ 
				if (!in.is_open())
				{
					cout << "������� �������� �����" << endl;
				}
				else
				{
					in << veh.get_infa() + "\n";
				}
				in.close(); break;
			case 3:
				cin >> p;
				in.open(path, ofstream::app);//(path) ������� ���� � ������� ��� �� � �����  (path,app)  �������� ��� ������ �� ������ 
				if (!in.is_open())
				{
					cout << "������� �������� �����" << endl;
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
					cout << "������� �������� �����" << endl;
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
					cout << "������� �������� �����" << endl;
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
			cout << "\n\t����������� ��I�! ��i������ ����� �� 1 �� 4. ���� ����� �������� ��� ";
		}
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <queue>
#include "Students.h"
#include "Complex.h"
#include "Auto.h"
#include "Windows.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");



	int numbers;
	vector <Students> students;
	cout << " ������� ���������� ���������, � ������� ����� ��������� ������: ";
	Students student;
	cin >> numbers;
	for (int i = 0; i < numbers; i++)
	{
		cout << " ���� ������ � " << i + 1 << " ��������: " << endl;
		cin >> student;
		students.push_back(student);
	}

	cout << endl;
	for (int i = 0; i < numbers; i++)
	{
		cout << " ������ � " << i + 1 << " ��������: " << endl << students[i];
	}
	cout << endl << endl << endl;



	list <Complex> complex;
	Complex one_complex;
	int numbers_of_complex;
	cout << " ������� ���������� ����������� �����: ";
	cin >> numbers_of_complex;
	for (int i = 0; i < numbers_of_complex; i++)
	{
		cout << " ���� ������ � z" << i + 1 << ":" << endl << " ������� �������������� �����: ";
		one_complex.set_x();
		cout << " ������� ������ �����: ";
		one_complex.set_y();
		complex.push_back(one_complex);
	}

	cout << endl;
	list <Complex>::iterator output;
	int count = 1;
	for (output = complex.begin(); output != complex.end(); output++)
	{
		cout << " z" << count << " = " << *output;
		count++;
	}
	cout << endl << endl << endl;



	queue <Auto> cars;
	Auto car;
	int answer;
	cout << " �������� �� ��������� ������? (������� 1 - ���� ��, 0 - ���� ���)" << endl;
	cin >> answer;
	do
	{
		if (answer == 1)
		{
			car.set_info_for_car();
			cars.push(car);

			if (cars.size() == 1)
			{
				cout << " � ������� ����� " << cars.size() << " ������" << endl;
			}

			if (cars.size() > 1 && cars.size() < 5)
			{
				cout << " � ������� ����� " << cars.size() << " ������" << endl;
			}

			if (cars.size() > 5)
			{
				cout << " � ������� ����� " << cars.size() << " �����" << endl;
			}

			if (cars.size() >= 3)
			{
				cout << " ����������������!" << endl;
			}
			cout << " �������� �� ��������� ��� ���� ������? ";
			cin >> answer;
		}
	} while (answer == 1);

	cout << endl;
	int count_cars = 1;
	while (!cars.empty())
	{
		cout << " ��������� " << count_cars << " ������ �� �������!" << endl << " ������ �� ���� ������: " << endl << cars.front() << endl;
		cars.pop();
		count_cars++;
	}
}

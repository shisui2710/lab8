#include "Auto.h"

void Auto::set_info_for_car()
{
	cout << " ������� ����� ������: ";
	cin >> brand;
	cout << " ������� ��� ��������� ������: ";
	cin >> owner_name;
}

ostream& operator<<(ostream& out, Auto& car)
{
	out << " ����� ������: " << car.brand << endl << " ��� ��������� ������: " << car.owner_name << endl;
	return out;
}

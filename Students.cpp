#include "Students.h"

Students::Students()
{
	surname = " ";
	name = " ";
	midname = " ";
	course = 0;
}

istream& operator>>(istream& in, Students& student)
{
	cout << " ������� ������� ��������: ";
	in >> student.surname;
	cout << " ������� ��� ��������: ";
	in >> student.name;
	cout << " ������� �������� ��������: ";
	in >> student.midname;
	cout << " ������� ���� �������� ��������: ";
	in >> student.course;
	return in;
}

ostream& operator<<(ostream& out, Students& student)
{
	out << " ������� ��������: " << student.surname << endl << " ��� ��������: " << student.name << endl << " �������� ��������: " << student.midname << endl << " ���� �������� ��������: " << student.course << endl;
	return out;
}

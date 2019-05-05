#ifndef STUDENTS_H_INCLUDED
#define STUDENTS_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
	string surname;
	string name;
	string midname;
	int course;
public:
	Students();
	~Students() {}
	friend istream& operator>>(istream& in, Students& student);
	friend ostream& operator<<(ostream& out, Students& student);
};

#endif // STUDENTS_H_INCLUDED

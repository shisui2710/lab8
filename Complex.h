#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class Complex
{
private:
	int x;
	int y;
public:
	Complex() {}
	~Complex() {}

	void set_x();
	void set_y();
	friend ostream& operator<<(ostream& out, Complex& complex);
};

#endif // COMPLEX_H_INCLUDED

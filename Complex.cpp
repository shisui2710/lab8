#include "Complex.h"

void Complex::set_x()
{
	cin >> x;
}

void Complex::set_y()
{
	cin >> y;
}

ostream& operator<<(ostream& out, Complex& complex)
{
	if (complex.y < 0)
	{
		out << complex.x << " - " << complex.y * (-1) << " * i" << endl;
	}
	else
	{
		out << complex.x << " + " << complex.y << " * i" << endl;
	}
	return out;
}

#include "Linear.h"
void Linear::Solution()
{
	cout << (getY() - getB()) * 1.0 / getA() << endl;;
}

void Linear::Show()
{
	cout << getY() << " = " << getA() << "x";
	if (getB() != 0) {
		if (getB() > 0) { cout << "+"; }
		cout << getB();
	}
	cout << endl;
	cout << "Solution: "; Solution(); cout << endl;
}



istream& operator>>(istream& in, Linear& m)
{
	double y, a, b;
	cout << "Equation:  y=ax+b" << endl;
	cout << "y = ?"; in >> y;
	cout << "a = ?"; in >> a;
	cout << "b = ?"; in >> b;
	m.setY(y);
	m.setA(a);
	m.setB(b);
	return in;
}

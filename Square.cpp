#include "Square.h"

void Square::Solution()
{
	double d, x1, x2;
	d = getB() * getB() - 4.0 * getA() * getC();
	x1 = (-1 * getB() + sqrt(d)) / (2.0 * getA());
	x2 = (-1 * getB() - sqrt(d)) / (2.0 * getA());
	cout << "x1 = " << x1 << "     x2 = " << x2 << endl;
}

void Square::Show()
{
	cout << getY() << " = " << getA() << "x*x";
	if (getB() != 0) {
		if (getB() > 0) { cout << "+"; }
		cout << getB() << "x";
	}
	if (getC() != 0) {
		if (getC() > 0) { cout << "+"; }
		cout << getC();
	}
	cout << endl;
	if (getB() * getB() - 4 * getA() * getC() >= 0)
	{
		Solution();
	}
	if (getB() * getB() - 4 * getA() * getC() < 0)
	{
		cout << "No solution " << endl;
	}
}




//ostream& operator<<(ostream& out, Square& m)
//{
//	out << m.getY() << " = " << m.getA() << "x*x";
//	if (m.getB() != 0) {
//		if (m.getB() > 0) { out << "+"; }
//		out << m.getB()<<"x";
//	}
//	if (m.getC() != 0) {
//		if (m.getC() > 0) { out << "+"; }
//		out << m.getC();
//	}
//	out << endl;
//	if (m.getB() * m.getB() - 4 * m.getA() * m.getC()>=0) 
//	{ 
//		m.Solution();
//	}
//	if (m.getB() * m.getB() - 4 * m.getA() * m.getC() < 0)
//	{
//		out << "No solution "<< endl;
//	}
//	return out;
//}

istream& operator>>(istream& in, Square& m)
{
	double y, a, b, c;
	cout << "Equation:  y=ax*x+bx+c" << endl;
	cout << "y = ?"; in >> y;
	cout << "a = ?"; in >> a;
	cout << "b = ?"; in >> b;
	cout << "c = ?"; in >> c;
	m.setY(y);
	m.setA(a);
	m.setB(b);
	m.setC(c);
	return in;
}

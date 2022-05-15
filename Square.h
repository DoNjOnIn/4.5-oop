#pragma once
#include "Root.h"
#include <iostream>
using namespace std;
class Square :
    public Root
{
private:
	double c;
public:
	void setC(double x) { c = x; }
	int getC() { return c; }
	void setA(double x) { a = x; }
	void setB(double x) { b = x; }
	int getA() { return a; }
	int getB() { return b; }
	void setY(double x) { y = x; }
	int getY() { return y; }
	void Solution();
	void Show();


	friend istream& operator >> (istream& in, Square& m);
};


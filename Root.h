#pragma once
class Root
{
protected:
	double y, a, b;
public:
	virtual void setA(double x) = 0;
	virtual void setB(double x) = 0;
	virtual int getA() = 0;
	virtual int getB() = 0;
	virtual void setY(double x) = 0;
	virtual int getY() = 0;

	virtual void Show() = 0;
	virtual void Solution() = 0;
};


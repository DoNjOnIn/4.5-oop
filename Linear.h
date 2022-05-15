#pragma once
#include "Root.h"
#include <iostream>
using namespace std;
class Linear :
    public Root
{
public:
    void Solution();
    void Show();
	void setA(double x) { a = x; }
	void setB(double x) { b = x; }
	int getA() { return a; }
	int getB() { return b; }
	void setY(double x) { y = x; }
	int getY() { return y; }
    
    friend istream& operator >> (istream& in, Linear& m);
};



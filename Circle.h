#pragma once
#include "point.h"

class Circle:public Point {
	friend ostream& operator<<(ostream&, const Circle&);

public:
	Circle(double = 0, int = 0, int = 0);
	void setRadious(double r);
	double getRadious() const;
	double calcArea() const;

protected:
	double radious;
};



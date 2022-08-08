#include "Circle.h"

const double PI = 3.14159;
Circle::Circle(double r, int x, int y) :Point(x, y) {
	setRadious(r);
}

void Circle::setRadious(double r) {
	radious = (r > 0) ? r : 0;
}

double Circle::getRadious() const{
	return radious;
}

double Circle::calcArea() const {
	return PI * radious;
}

ostream& operator<<(ostream& out, const Circle& c) {
	cout << "center at " << static_cast<Point>(c)\
		<< "\nradious as " << c.radious << " is " << c.calcArea();
	return out;
}


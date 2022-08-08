#include "point.h"

Point::Point(int a,int b){
	setPoint(a, b);
}

void Point::setPoint(int a, int b) {
	x = a;
	y = b;
}

ostream& operator<<(ostream& out, const Point& p) {
	//cout << "\npoints are : ";
	cout << "[" << p.x << "," << p.y << "]";
	return out;
}




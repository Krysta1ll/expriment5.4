#include"shape.h"
using namespace std;
Circle::Circle(double value)
{
	r = value;
	double temp = 3.14 * r * r;
	setS(temp);
}

void Shape::setS(double value)
{
	S = value;
}

double Shape::getS()
{
	return S;
}

Square::Square(double value)
{
	side = value;
	double temp = pow(side, 2);
	setS(temp);
}

Rectangle::Rectangle(double value1, double value2)
{
	width = value1;
	lenth = value2;
	double temp;
	temp = width * lenth;
	setS(temp);
}

Trapezoid::Trapezoid(double value1, double value2, double value3)
{
	upside = value1;
	downside = value2;
	height = value3;
	double temp = ((value1 + value2) * value3) / 2;
	setS(temp);
}

Triangle::Triangle(double value1, double value2, double value3)
{
	side1 = value1;
	side2 = value2;
	side3 = value3;
	double temp1, temp2;
	temp1 = (side1 + side2 + side3) / 2;
	temp2 = sqrt(temp1 * (temp1 - side1) * (temp1 - side2) * (temp1 - side3));
	setS(temp2);
}

#include"shape.h"
using namespace std;
int main() {
	
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	
	
	
	cout << "圆形的面积是：" << circle.getS() << endl
		<< "正方形的面积是：" << square.getS() << endl
		<< "长方形的面积是：" << rectangle.getS() << endl
		<< "梯形的面积是：" << trapezoid.getS() << endl
		<< "三角形的面积是：" << triangle.getS() << endl
		<< "总面积为：" << circle.getS() + square.getS() + rectangle.getS() + trapezoid.getS() + triangle.getS();
		;

}
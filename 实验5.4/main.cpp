#include"shape.h"
using namespace std;
int main() {
	
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	
	
	
	cout << "Բ�ε�����ǣ�" << circle.getS() << endl
		<< "�����ε�����ǣ�" << square.getS() << endl
		<< "�����ε�����ǣ�" << rectangle.getS() << endl
		<< "���ε�����ǣ�" << trapezoid.getS() << endl
		<< "�����ε�����ǣ�" << triangle.getS() << endl
		<< "�����Ϊ��" << circle.getS() + square.getS() + rectangle.getS() + trapezoid.getS() + triangle.getS();
		;

}